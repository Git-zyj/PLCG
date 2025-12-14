#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1647647156U;
unsigned long long int var_1 = 13354168463354764684ULL;
unsigned int var_2 = 209923107U;
unsigned int var_4 = 1389040916U;
signed char var_5 = (signed char)-89;
unsigned int var_6 = 1728212648U;
_Bool var_7 = (_Bool)1;
int var_8 = 1189587335;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)87;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)2132;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
