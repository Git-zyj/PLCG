#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16118212428829547748ULL;
unsigned long long int var_13 = 4213342920122068274ULL;
unsigned long long int var_14 = 4933380062574355032ULL;
long long int var_15 = 992838907976104914LL;
short var_16 = (short)-30900;
int zero = 0;
unsigned long long int var_18 = 4056010225435412059ULL;
unsigned long long int var_19 = 1475933675950854830ULL;
void init() {
}

void checksum() {
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
