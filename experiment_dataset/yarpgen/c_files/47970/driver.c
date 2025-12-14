#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23155;
short var_3 = (short)-7896;
unsigned long long int var_5 = 9398968371487048674ULL;
long long int var_6 = 3829476154806998124LL;
unsigned int var_7 = 3250705098U;
unsigned int var_8 = 4186547340U;
long long int var_9 = 5684575251003696517LL;
int zero = 0;
unsigned long long int var_10 = 4733639271282973923ULL;
unsigned int var_11 = 3552774582U;
unsigned char var_12 = (unsigned char)111;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
