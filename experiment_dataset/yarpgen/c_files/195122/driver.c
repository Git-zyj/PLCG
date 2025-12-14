#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21300;
short var_5 = (short)-27578;
_Bool var_6 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)137;
unsigned long long int var_17 = 3901618253021096177ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)214;
unsigned long long int var_21 = 7424467081450793073ULL;
long long int var_22 = 2419646765533505985LL;
unsigned char var_23 = (unsigned char)29;
signed char var_24 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
