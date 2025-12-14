#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15901;
unsigned short var_2 = (unsigned short)16468;
short var_3 = (short)-10436;
unsigned int var_6 = 2214822892U;
short var_7 = (short)10112;
int var_9 = 1208698332;
unsigned long long int var_10 = 6773200184474333530ULL;
short var_11 = (short)25497;
int zero = 0;
unsigned int var_12 = 1731642243U;
unsigned char var_13 = (unsigned char)10;
int var_14 = -1046220883;
signed char var_15 = (signed char)41;
unsigned int var_16 = 1441339794U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
