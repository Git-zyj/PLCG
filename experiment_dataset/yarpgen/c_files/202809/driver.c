#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -322257246;
int var_3 = -1295983187;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)3657;
unsigned short var_7 = (unsigned short)43366;
unsigned int var_8 = 3649773770U;
signed char var_9 = (signed char)-123;
unsigned short var_10 = (unsigned short)3030;
signed char var_11 = (signed char)-24;
int zero = 0;
unsigned long long int var_12 = 14392896979395525514ULL;
unsigned long long int var_13 = 12136031728189351372ULL;
long long int var_14 = -2985782446164920503LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2336476860U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
