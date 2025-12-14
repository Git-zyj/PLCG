#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6704409958601769352ULL;
unsigned long long int var_3 = 3068503952892213002ULL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-12497;
long long int var_12 = 1910948981504179110LL;
signed char var_13 = (signed char)106;
long long int var_15 = -2544297398407490371LL;
int zero = 0;
unsigned long long int var_16 = 7798850394663145088ULL;
long long int var_17 = 545235295496407468LL;
short var_18 = (short)-22200;
long long int var_19 = 6267354048068546074LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
