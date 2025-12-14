#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1752806670U;
unsigned long long int var_3 = 10220972589984309199ULL;
unsigned char var_4 = (unsigned char)139;
signed char var_6 = (signed char)-64;
unsigned char var_7 = (unsigned char)28;
unsigned char var_9 = (unsigned char)91;
unsigned long long int var_11 = 15647080883949998984ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)238;
unsigned long long int var_17 = 9394903438112393000ULL;
signed char var_18 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
