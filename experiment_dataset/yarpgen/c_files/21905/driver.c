#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1058764858U;
long long int var_3 = -5821984059312340096LL;
signed char var_5 = (signed char)-55;
unsigned long long int var_7 = 12246255742406388558ULL;
short var_8 = (short)17424;
unsigned char var_9 = (unsigned char)10;
signed char var_12 = (signed char)-2;
int zero = 0;
signed char var_13 = (signed char)-20;
_Bool var_14 = (_Bool)0;
short var_15 = (short)5430;
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
