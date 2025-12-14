#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -734313412;
int var_1 = 614262719;
unsigned long long int var_2 = 8249116642755973803ULL;
unsigned short var_5 = (unsigned short)38276;
long long int var_8 = -9182464915821591687LL;
unsigned short var_9 = (unsigned short)35260;
long long int var_10 = -8799061001191590285LL;
int var_12 = -2024204890;
unsigned char var_13 = (unsigned char)17;
int zero = 0;
unsigned int var_18 = 3219098011U;
long long int var_19 = 6315304460381910595LL;
unsigned short var_20 = (unsigned short)41326;
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
