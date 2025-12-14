#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
_Bool var_2 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned char var_13 = (unsigned char)194;
signed char var_16 = (signed char)71;
signed char var_17 = (signed char)-50;
int zero = 0;
unsigned char var_18 = (unsigned char)240;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2857063563U;
int var_21 = -697544040;
signed char var_22 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
