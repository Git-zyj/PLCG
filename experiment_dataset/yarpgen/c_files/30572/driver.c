#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5692335196649380795LL;
signed char var_1 = (signed char)77;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)191;
long long int var_6 = 4842975653290509159LL;
signed char var_7 = (signed char)(-127 - 1);
long long int var_8 = 1259450425240404142LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = -329351405372302376LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 7598351984845816364ULL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 12520559159850446901ULL;
int var_20 = -1778836672;
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
