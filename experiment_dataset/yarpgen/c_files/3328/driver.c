#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 138853278;
signed char var_2 = (signed char)104;
signed char var_4 = (signed char)87;
int var_6 = 727855906;
int var_7 = 799172082;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3969088356U;
int zero = 0;
unsigned short var_11 = (unsigned short)62284;
unsigned char var_12 = (unsigned char)114;
int var_13 = 1982066823;
void init() {
}

void checksum() {
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
