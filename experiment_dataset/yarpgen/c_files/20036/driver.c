#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1654080158312198267ULL;
signed char var_2 = (signed char)50;
int var_8 = 1588509214;
unsigned long long int var_9 = 14705263362180253020ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)216;
unsigned long long int var_18 = 501458291802440282ULL;
int zero = 0;
short var_19 = (short)-17856;
long long int var_20 = -4563862903369074944LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
