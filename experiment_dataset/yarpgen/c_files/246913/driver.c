#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)-88;
signed char var_4 = (signed char)-39;
unsigned long long int var_7 = 52301352906551801ULL;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-15;
_Bool var_12 = (_Bool)0;
int var_14 = -63800186;
signed char var_18 = (signed char)40;
int zero = 0;
unsigned char var_20 = (unsigned char)138;
unsigned int var_21 = 414169591U;
void init() {
}

void checksum() {
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
