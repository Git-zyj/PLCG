#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2412155658470230174LL;
unsigned long long int var_2 = 7355837106918118733ULL;
unsigned short var_3 = (unsigned short)58326;
short var_4 = (short)-10322;
long long int var_5 = 5028858619633318879LL;
long long int var_6 = -7614507095610856985LL;
long long int var_9 = -2603684906446349092LL;
int zero = 0;
unsigned char var_10 = (unsigned char)98;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)253;
unsigned long long int var_13 = 10397853058832916196ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
