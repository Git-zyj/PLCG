#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2024840791;
unsigned int var_4 = 641179437U;
long long int var_5 = 5473776332715044967LL;
int var_9 = 1794347503;
long long int var_12 = -7771921398949409732LL;
long long int var_14 = 443671317238734774LL;
unsigned long long int var_15 = 7434018800227705257ULL;
int zero = 0;
short var_16 = (short)-28394;
long long int var_17 = 2221925979754178387LL;
unsigned char var_18 = (unsigned char)137;
long long int var_19 = -1860796779643314697LL;
int var_20 = 1214462504;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
