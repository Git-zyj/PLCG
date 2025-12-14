#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4182443866U;
signed char var_2 = (signed char)116;
unsigned int var_7 = 2450859433U;
unsigned int var_9 = 446219410U;
long long int var_11 = 6718156540982389766LL;
unsigned short var_13 = (unsigned short)18211;
int zero = 0;
unsigned long long int var_19 = 18365329389897686661ULL;
long long int var_20 = -1553909217930936228LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
