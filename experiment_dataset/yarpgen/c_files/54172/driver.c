#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16737;
unsigned int var_1 = 557304279U;
int var_2 = 1487701814;
unsigned short var_4 = (unsigned short)39447;
int var_6 = 241397509;
unsigned char var_7 = (unsigned char)247;
unsigned char var_8 = (unsigned char)140;
long long int var_11 = -9098972935028823742LL;
unsigned long long int var_12 = 2142593186348555228ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 3001698685040183242ULL;
unsigned long long int var_16 = 7185277367712075651ULL;
unsigned int var_17 = 2847501128U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
