#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7767229920160508616LL;
short var_2 = (short)16164;
short var_5 = (short)-8581;
unsigned char var_6 = (unsigned char)194;
long long int var_9 = -1325592477296253592LL;
unsigned int var_10 = 549495592U;
unsigned int var_11 = 2271656788U;
int zero = 0;
short var_13 = (short)-19722;
short var_14 = (short)-8935;
signed char var_15 = (signed char)4;
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
