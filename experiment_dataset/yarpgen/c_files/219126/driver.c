#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)91;
signed char var_5 = (signed char)51;
unsigned char var_8 = (unsigned char)195;
signed char var_9 = (signed char)60;
signed char var_10 = (signed char)-58;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-13;
int zero = 0;
long long int var_18 = -5107480238501532998LL;
_Bool var_19 = (_Bool)0;
short var_20 = (short)19266;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
