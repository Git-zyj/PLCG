#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1117798797;
short var_4 = (short)-1180;
unsigned long long int var_7 = 2008518771168889877ULL;
int var_10 = -2035980746;
unsigned short var_11 = (unsigned short)38850;
int zero = 0;
unsigned long long int var_13 = 13395215660809518658ULL;
unsigned long long int var_14 = 2353121498594846355ULL;
int var_15 = -632686887;
int var_16 = 1534759469;
int var_17 = -867194494;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
