#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3933961216202880832LL;
unsigned char var_2 = (unsigned char)137;
unsigned short var_6 = (unsigned short)13097;
signed char var_7 = (signed char)-16;
int zero = 0;
unsigned short var_12 = (unsigned short)25957;
signed char var_13 = (signed char)-83;
unsigned int var_14 = 15784445U;
int var_15 = -729534052;
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
