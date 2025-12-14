#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7055073577877073499ULL;
long long int var_1 = 3514927209418471533LL;
signed char var_3 = (signed char)19;
int var_4 = 1452385172;
long long int var_5 = 4998384871354501421LL;
signed char var_6 = (signed char)116;
int var_7 = -580593148;
short var_8 = (short)-21705;
int var_9 = -1110268191;
unsigned long long int var_10 = 16566305744677399930ULL;
int zero = 0;
long long int var_11 = 9181819480715341438LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 868079477420630452LL;
unsigned int var_14 = 2119732272U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
