#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9695310125900529673ULL;
_Bool var_1 = (_Bool)1;
long long int var_3 = 2281377963665875364LL;
signed char var_4 = (signed char)-110;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 271703609497408196ULL;
unsigned char var_9 = (unsigned char)117;
unsigned char var_11 = (unsigned char)153;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 7675168148415141545LL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
