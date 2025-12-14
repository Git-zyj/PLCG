#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6666713694639474088LL;
short var_2 = (short)-5906;
unsigned long long int var_4 = 7718347445950748417ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1403901414U;
signed char var_8 = (signed char)121;
signed char var_10 = (signed char)73;
unsigned int var_11 = 3519255211U;
int zero = 0;
signed char var_15 = (signed char)-76;
int var_16 = 200096161;
unsigned char var_17 = (unsigned char)16;
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
