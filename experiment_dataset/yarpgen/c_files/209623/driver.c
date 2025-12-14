#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)189;
long long int var_3 = 8456038517166533010LL;
long long int var_4 = 4180838764210153721LL;
unsigned long long int var_5 = 5902569776509974708ULL;
signed char var_6 = (signed char)-74;
long long int var_10 = -577358590766411381LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = -6613475959931095430LL;
signed char var_15 = (signed char)3;
unsigned int var_16 = 1771302401U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
