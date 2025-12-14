#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 906805658U;
long long int var_3 = 108053175056937957LL;
short var_14 = (short)-17567;
int zero = 0;
short var_18 = (short)17354;
long long int var_19 = -4488048438439221892LL;
long long int var_20 = -5240888140807639575LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
