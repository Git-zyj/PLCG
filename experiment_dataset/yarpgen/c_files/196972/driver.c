#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int var_7 = -1195106339;
long long int var_9 = -830611674951705838LL;
unsigned char var_11 = (unsigned char)155;
int var_15 = 2130142975;
unsigned int var_17 = 2669577829U;
int zero = 0;
long long int var_18 = -6110114612435437442LL;
signed char var_19 = (signed char)103;
signed char var_20 = (signed char)-43;
void init() {
}

void checksum() {
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
