#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 4017621812650967288LL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-18438;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int var_8 = 101570852;
unsigned short var_9 = (unsigned short)30106;
short var_10 = (short)-8992;
_Bool var_11 = (_Bool)0;
int var_12 = 18774603;
int var_13 = -1191396226;
long long int var_14 = 5124426185842049770LL;
int var_15 = -1019213595;
signed char var_16 = (signed char)-17;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)53831;
unsigned char var_20 = (unsigned char)169;
int var_21 = -708456381;
int var_22 = -741270774;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
