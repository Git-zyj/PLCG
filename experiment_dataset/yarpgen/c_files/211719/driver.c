#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5955452362845728043ULL;
short var_2 = (short)-20610;
_Bool var_6 = (_Bool)1;
short var_7 = (short)22182;
unsigned int var_8 = 605662199U;
long long int var_9 = 8380601829311102122LL;
short var_13 = (short)-23329;
int zero = 0;
long long int var_14 = 4182328452216921957LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 633831622439522761ULL;
unsigned long long int var_17 = 17108092182032894894ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
