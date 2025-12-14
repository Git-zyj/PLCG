#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
int var_1 = -269260990;
unsigned char var_2 = (unsigned char)68;
int var_4 = -1995172965;
unsigned int var_9 = 4224181281U;
unsigned char var_10 = (unsigned char)206;
int zero = 0;
long long int var_11 = -2484656328003393041LL;
long long int var_12 = 7016899635918899730LL;
unsigned int var_13 = 2219264183U;
int var_14 = 587291079;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
