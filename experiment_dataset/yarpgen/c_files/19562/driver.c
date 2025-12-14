#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13461400697600491312ULL;
signed char var_1 = (signed char)-46;
unsigned int var_6 = 1175007425U;
unsigned long long int var_8 = 473208753717654364ULL;
unsigned long long int var_9 = 17490140581921620296ULL;
int zero = 0;
long long int var_10 = 7877785921105102448LL;
unsigned short var_11 = (unsigned short)28582;
unsigned short var_12 = (unsigned short)46560;
unsigned int var_13 = 4204022378U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
