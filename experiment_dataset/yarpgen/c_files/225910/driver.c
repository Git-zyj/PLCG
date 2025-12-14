#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)10131;
signed char var_6 = (signed char)103;
unsigned int var_7 = 3526397177U;
unsigned short var_9 = (unsigned short)50338;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)23905;
int zero = 0;
int var_13 = 125831492;
long long int var_14 = -3749074446711590783LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
