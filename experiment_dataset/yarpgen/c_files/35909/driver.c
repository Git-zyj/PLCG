#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
unsigned long long int var_2 = 13473601834799117661ULL;
unsigned char var_4 = (unsigned char)190;
long long int var_5 = 4457620306321969138LL;
unsigned int var_9 = 770831711U;
short var_13 = (short)-24947;
int zero = 0;
unsigned char var_20 = (unsigned char)119;
int var_21 = 2137650284;
unsigned long long int var_22 = 15730734172360330312ULL;
void init() {
}

void checksum() {
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
