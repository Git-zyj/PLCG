#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16715354713138204157ULL;
unsigned long long int var_10 = 4274006619835966282ULL;
unsigned long long int var_16 = 15611687241162349059ULL;
int zero = 0;
unsigned long long int var_17 = 13128931630952021044ULL;
unsigned long long int var_18 = 1435479053222374783ULL;
unsigned long long int var_19 = 5531563600965511795ULL;
void init() {
}

void checksum() {
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
