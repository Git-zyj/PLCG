#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 885797572409181286ULL;
int var_6 = -1305628692;
unsigned short var_8 = (unsigned short)46613;
int var_9 = 2035618871;
int var_11 = 1438956622;
long long int var_12 = -8242673360378253818LL;
int var_13 = -277903572;
short var_15 = (short)480;
int zero = 0;
unsigned int var_16 = 2126522402U;
short var_17 = (short)-28140;
unsigned long long int var_18 = 5900393845757581634ULL;
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
