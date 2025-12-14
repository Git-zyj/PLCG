#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9563187964775293095ULL;
long long int var_5 = 6888123301448090704LL;
unsigned short var_6 = (unsigned short)28039;
unsigned short var_7 = (unsigned short)32832;
unsigned short var_9 = (unsigned short)38045;
_Bool var_13 = (_Bool)1;
unsigned char var_16 = (unsigned char)155;
int zero = 0;
unsigned int var_17 = 378223816U;
unsigned long long int var_18 = 14267735262157032997ULL;
unsigned long long int var_19 = 5718024480530103679ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
