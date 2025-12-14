#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2113411425530426062LL;
short var_5 = (short)-21973;
unsigned long long int var_6 = 13184636523260693001ULL;
short var_7 = (short)20183;
unsigned int var_8 = 3676613126U;
unsigned short var_11 = (unsigned short)16901;
long long int var_12 = -6241642755309865607LL;
int zero = 0;
unsigned long long int var_13 = 17803502228493269055ULL;
unsigned long long int var_14 = 6282978754793908152ULL;
int var_15 = -1264312185;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
