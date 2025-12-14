#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2705738550178727856LL;
unsigned char var_3 = (unsigned char)114;
unsigned short var_5 = (unsigned short)8450;
int var_6 = -925661781;
_Bool var_8 = (_Bool)0;
unsigned short var_12 = (unsigned short)59402;
unsigned long long int var_14 = 17232550667114615442ULL;
unsigned long long int var_16 = 14913701192800812076ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)197;
unsigned short var_18 = (unsigned short)17143;
long long int var_19 = -3329853716931926850LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
