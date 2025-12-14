#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)93;
unsigned short var_2 = (unsigned short)51016;
unsigned int var_4 = 2028369831U;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 1940616250448274666ULL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)19;
signed char var_13 = (signed char)-90;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
