#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 978271275607019150ULL;
unsigned char var_3 = (unsigned char)69;
short var_5 = (short)155;
unsigned long long int var_7 = 6621570827045364620ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)14016;
unsigned long long int var_19 = 13883942063507118063ULL;
void init() {
}

void checksum() {
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
