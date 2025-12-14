#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5691164166387315446LL;
short var_1 = (short)5992;
unsigned long long int var_4 = 4124410949415390002ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3820871279U;
unsigned long long int var_10 = 916728673698518611ULL;
short var_12 = (short)-21242;
long long int var_14 = -6290848453135699601LL;
signed char var_15 = (signed char)94;
int zero = 0;
unsigned short var_16 = (unsigned short)13136;
unsigned int var_17 = 3649902141U;
unsigned short var_18 = (unsigned short)24173;
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
