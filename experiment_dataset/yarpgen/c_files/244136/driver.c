#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -456220156;
int var_4 = 339715142;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1816440094U;
int zero = 0;
unsigned int var_15 = 2069327702U;
unsigned long long int var_16 = 16310355590082467482ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 13580565352632088775ULL;
unsigned long long int var_19 = 8503242082513067775ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
