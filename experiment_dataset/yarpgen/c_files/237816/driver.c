#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11285;
signed char var_2 = (signed char)-31;
long long int var_3 = 1029276693487862790LL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-24637;
unsigned long long int var_7 = 5036835853416601546ULL;
unsigned int var_8 = 1743502623U;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)91;
int zero = 0;
unsigned long long int var_11 = 6321247797614398051ULL;
unsigned char var_12 = (unsigned char)76;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
