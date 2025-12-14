#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -264533759;
int var_1 = -175870319;
int var_2 = 500607830;
int var_3 = 1144417258;
unsigned short var_4 = (unsigned short)35876;
short var_5 = (short)5957;
unsigned long long int var_6 = 9423795845409491380ULL;
unsigned int var_7 = 2418326268U;
int var_8 = 461024528;
short var_9 = (short)31269;
int zero = 0;
long long int var_10 = 5911204445155918511LL;
unsigned short var_11 = (unsigned short)62073;
unsigned short var_12 = (unsigned short)5624;
unsigned char var_13 = (unsigned char)169;
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
