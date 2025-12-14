#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)159;
long long int var_2 = 791339440003977880LL;
unsigned int var_3 = 1229480990U;
unsigned short var_4 = (unsigned short)35560;
signed char var_5 = (signed char)41;
signed char var_8 = (signed char)-49;
int var_9 = 351806685;
unsigned short var_11 = (unsigned short)47029;
long long int var_12 = -8807579883658240890LL;
signed char var_13 = (signed char)-76;
unsigned long long int var_14 = 16669459852580560065ULL;
long long int var_15 = -318283036154896416LL;
_Bool var_16 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)4;
int var_21 = -648592781;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
