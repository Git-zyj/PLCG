#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51881;
unsigned long long int var_1 = 2457929869850235693ULL;
unsigned short var_2 = (unsigned short)47338;
unsigned int var_5 = 303809352U;
long long int var_6 = -6625211392086132118LL;
int var_7 = -1284124681;
int var_8 = 324352606;
int var_9 = 697697619;
int zero = 0;
unsigned long long int var_11 = 7058649089568223344ULL;
unsigned long long int var_12 = 1249920000844464067ULL;
unsigned char var_13 = (unsigned char)221;
int var_14 = -634750574;
unsigned char var_15 = (unsigned char)130;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
