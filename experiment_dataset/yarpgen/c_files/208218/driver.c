#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1259730544;
unsigned long long int var_4 = 104481316139658226ULL;
signed char var_9 = (signed char)76;
long long int var_11 = -6659063560824397968LL;
int zero = 0;
unsigned char var_16 = (unsigned char)23;
unsigned short var_17 = (unsigned short)13637;
unsigned short var_18 = (unsigned short)9204;
long long int var_19 = 4230865029718423088LL;
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
