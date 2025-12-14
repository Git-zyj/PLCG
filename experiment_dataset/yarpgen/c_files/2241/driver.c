#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1827168878;
unsigned char var_1 = (unsigned char)66;
int var_2 = -742800479;
short var_3 = (short)-28294;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)42327;
long long int var_7 = -4998580705796277270LL;
signed char var_8 = (signed char)9;
signed char var_9 = (signed char)40;
long long int var_10 = 4994170890007805225LL;
unsigned long long int var_11 = 7882040780661421053ULL;
int zero = 0;
unsigned long long int var_13 = 6696140363184401896ULL;
int var_14 = 1468445010;
long long int var_15 = 7083916679431445717LL;
unsigned long long int var_16 = 17041632036262031095ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
