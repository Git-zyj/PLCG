#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3281969619U;
int var_2 = 116172840;
_Bool var_3 = (_Bool)1;
int var_8 = 162095088;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 3621162780U;
short var_20 = (short)2781;
signed char var_21 = (signed char)63;
unsigned int var_22 = 224018389U;
void init() {
}

void checksum() {
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
