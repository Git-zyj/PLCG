#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -162040521;
int var_2 = -1089453211;
unsigned int var_4 = 4200004409U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 12131435931442762579ULL;
short var_7 = (short)28393;
_Bool var_11 = (_Bool)1;
short var_12 = (short)19636;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 18041411412392564256ULL;
int var_15 = 211154439;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
