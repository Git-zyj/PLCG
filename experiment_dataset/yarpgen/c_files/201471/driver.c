#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)64;
unsigned char var_7 = (unsigned char)6;
unsigned short var_8 = (unsigned short)50391;
unsigned long long int var_13 = 1313533147728391489ULL;
int var_14 = 120233411;
unsigned long long int var_15 = 16910623949576289439ULL;
unsigned long long int var_17 = 16459511773111936005ULL;
long long int var_18 = -4600408798351678145LL;
int zero = 0;
int var_19 = -1895218376;
unsigned short var_20 = (unsigned short)35585;
int var_21 = 1635947860;
long long int var_22 = -1374576710599269592LL;
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
