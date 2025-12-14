#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7006099374195591184LL;
signed char var_4 = (signed char)116;
unsigned long long int var_6 = 6940102740105021176ULL;
short var_7 = (short)-4431;
short var_8 = (short)14487;
unsigned char var_11 = (unsigned char)154;
unsigned short var_13 = (unsigned short)43915;
signed char var_18 = (signed char)-119;
int var_19 = 1891795314;
int zero = 0;
unsigned int var_20 = 531480904U;
unsigned long long int var_21 = 15722030040852706514ULL;
unsigned long long int var_22 = 13533268394340489333ULL;
unsigned long long int var_23 = 3841401993852984638ULL;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
