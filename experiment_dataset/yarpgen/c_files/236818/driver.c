#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2329763811942340213ULL;
unsigned short var_1 = (unsigned short)23252;
long long int var_3 = -6045185026614988666LL;
short var_4 = (short)-28912;
int var_5 = -637743378;
unsigned int var_6 = 2512731180U;
short var_7 = (short)-26997;
unsigned long long int var_8 = 18313125267234509492ULL;
unsigned char var_10 = (unsigned char)130;
int zero = 0;
signed char var_11 = (signed char)117;
unsigned long long int var_12 = 6032272264664998766ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
