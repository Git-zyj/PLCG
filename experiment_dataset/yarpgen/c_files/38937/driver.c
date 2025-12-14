#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 555428181;
unsigned int var_4 = 3667986117U;
long long int var_5 = 799846556664446572LL;
unsigned long long int var_6 = 2327144824611043722ULL;
signed char var_9 = (signed char)-46;
int zero = 0;
long long int var_10 = -7530345163614608028LL;
long long int var_11 = 3706576610018675819LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
