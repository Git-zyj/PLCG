#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-17;
unsigned short var_3 = (unsigned short)47147;
signed char var_4 = (signed char)30;
unsigned short var_5 = (unsigned short)21136;
_Bool var_6 = (_Bool)0;
long long int var_7 = -2739011319593200423LL;
signed char var_9 = (signed char)-54;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)63002;
int zero = 0;
signed char var_12 = (signed char)-109;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
