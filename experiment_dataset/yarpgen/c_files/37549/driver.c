#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1090448031;
unsigned short var_4 = (unsigned short)47505;
unsigned long long int var_5 = 137767068760911298ULL;
unsigned long long int var_8 = 6076355362552283615ULL;
unsigned char var_9 = (unsigned char)4;
unsigned short var_15 = (unsigned short)27583;
int zero = 0;
int var_18 = 1642222923;
long long int var_19 = 2027478616339959167LL;
unsigned long long int var_20 = 4655182452151213073ULL;
int var_21 = -1441223268;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
