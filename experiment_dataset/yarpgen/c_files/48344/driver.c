#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
unsigned char var_1 = (unsigned char)118;
unsigned char var_2 = (unsigned char)1;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)27295;
_Bool var_5 = (_Bool)1;
int var_7 = 343710157;
unsigned long long int var_8 = 4894377328167749786ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 15456037882303944927ULL;
int var_15 = 493124238;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)26841;
signed char var_18 = (signed char)-51;
int zero = 0;
unsigned long long int var_19 = 4946907409921367060ULL;
signed char var_20 = (signed char)32;
_Bool var_21 = (_Bool)1;
long long int var_22 = 1997750495298610117LL;
unsigned int var_23 = 3673271148U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
