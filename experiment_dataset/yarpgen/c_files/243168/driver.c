#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13867;
signed char var_2 = (signed char)-6;
signed char var_6 = (signed char)-124;
unsigned int var_7 = 3051544898U;
signed char var_9 = (signed char)-49;
signed char var_13 = (signed char)-65;
signed char var_14 = (signed char)62;
unsigned int var_16 = 4085214679U;
int zero = 0;
long long int var_18 = 4932887132451967024LL;
_Bool var_19 = (_Bool)1;
int var_20 = -339877212;
unsigned int var_21 = 1003389849U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
