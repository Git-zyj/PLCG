#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -333863966;
unsigned int var_1 = 1541780633U;
int var_2 = -1646296615;
_Bool var_4 = (_Bool)1;
int var_5 = 540167197;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)122;
_Bool var_9 = (_Bool)0;
int var_10 = -382345071;
int var_11 = -1184488480;
int var_13 = -1301576181;
unsigned int var_15 = 416709931U;
int zero = 0;
int var_16 = 1285322831;
short var_17 = (short)-5949;
short var_18 = (short)17337;
unsigned int var_19 = 803007430U;
int var_20 = -877876213;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
