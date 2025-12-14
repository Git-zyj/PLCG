#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12542;
unsigned int var_2 = 3941535551U;
unsigned int var_4 = 3449862976U;
_Bool var_5 = (_Bool)0;
long long int var_6 = -3975903434174806763LL;
unsigned char var_13 = (unsigned char)139;
unsigned int var_14 = 1861230832U;
int zero = 0;
long long int var_20 = -3528170533834513141LL;
long long int var_21 = 5536240041149752276LL;
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
