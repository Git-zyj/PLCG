#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13593;
signed char var_2 = (signed char)-14;
long long int var_4 = -4884348654221666975LL;
unsigned char var_7 = (unsigned char)196;
unsigned long long int var_8 = 18080633982147047469ULL;
short var_9 = (short)-642;
int zero = 0;
long long int var_12 = 5874561164154974125LL;
unsigned char var_13 = (unsigned char)102;
void init() {
}

void checksum() {
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
