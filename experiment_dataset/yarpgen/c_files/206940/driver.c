#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1209316849;
long long int var_10 = 457265943781595145LL;
signed char var_11 = (signed char)89;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)11973;
signed char var_15 = (signed char)-11;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_19 = -1303195244;
long long int var_20 = 4060962643097121342LL;
unsigned char var_21 = (unsigned char)128;
int var_22 = -829652637;
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
