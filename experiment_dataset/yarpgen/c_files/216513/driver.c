#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 631911608;
unsigned char var_4 = (unsigned char)168;
unsigned long long int var_6 = 4107662490192252219ULL;
short var_7 = (short)21624;
unsigned long long int var_8 = 15987922338327221244ULL;
int var_9 = 22959906;
int zero = 0;
unsigned short var_10 = (unsigned short)22556;
int var_11 = 996617792;
int var_12 = -1312250493;
short var_13 = (short)-26007;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
