#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6562426177733631565LL;
signed char var_4 = (signed char)20;
unsigned short var_11 = (unsigned short)63887;
signed char var_13 = (signed char)-114;
unsigned short var_14 = (unsigned short)16188;
int zero = 0;
long long int var_16 = 1524823044140312111LL;
long long int var_17 = 5768230805635545877LL;
signed char var_18 = (signed char)-39;
unsigned char var_19 = (unsigned char)196;
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
