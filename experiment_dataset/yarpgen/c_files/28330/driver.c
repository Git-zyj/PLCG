#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15916385334675903446ULL;
signed char var_6 = (signed char)-98;
unsigned long long int var_7 = 10357871711639852564ULL;
short var_8 = (short)13354;
short var_9 = (short)14338;
short var_10 = (short)-25718;
int zero = 0;
unsigned char var_15 = (unsigned char)253;
unsigned int var_16 = 1377558461U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
