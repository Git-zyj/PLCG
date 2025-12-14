#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35842;
long long int var_3 = -1765452100032270712LL;
long long int var_4 = 4237053264408088874LL;
unsigned short var_5 = (unsigned short)57146;
unsigned short var_7 = (unsigned short)3526;
short var_8 = (short)15635;
long long int var_12 = 3668802411640033977LL;
long long int var_15 = 6691622254989044692LL;
int zero = 0;
unsigned short var_16 = (unsigned short)64121;
short var_17 = (short)-4790;
short var_18 = (short)-18734;
long long int var_19 = 3068783705025376044LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
