#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11339131023781633052ULL;
short var_5 = (short)-10828;
unsigned int var_6 = 3686972930U;
unsigned short var_7 = (unsigned short)61820;
unsigned long long int var_10 = 1449697108336205972ULL;
int zero = 0;
unsigned long long int var_11 = 12985361646059133470ULL;
signed char var_12 = (signed char)-21;
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
