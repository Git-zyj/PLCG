#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3534062844942050947LL;
unsigned long long int var_2 = 9582391570846437517ULL;
int var_4 = 1979174248;
short var_6 = (short)-17546;
short var_7 = (short)-5082;
long long int var_11 = 5650481661829863936LL;
unsigned long long int var_15 = 3428967170969631377ULL;
int zero = 0;
long long int var_16 = -1627583745472055918LL;
short var_17 = (short)31313;
int var_18 = -996773933;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
