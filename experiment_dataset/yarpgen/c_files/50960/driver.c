#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1824130222460799581LL;
signed char var_1 = (signed char)85;
unsigned short var_2 = (unsigned short)46001;
short var_4 = (short)9424;
unsigned int var_5 = 935464503U;
signed char var_6 = (signed char)-71;
unsigned short var_7 = (unsigned short)32298;
long long int var_9 = 7186833476080016957LL;
int var_10 = 303333067;
short var_11 = (short)-28627;
int var_12 = -1666259312;
int zero = 0;
long long int var_14 = -7449097696030776822LL;
int var_15 = -1562908489;
unsigned char var_16 = (unsigned char)138;
int var_17 = 572463842;
void init() {
}

void checksum() {
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
