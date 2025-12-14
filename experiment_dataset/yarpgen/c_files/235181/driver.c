#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)63;
unsigned short var_2 = (unsigned short)11777;
unsigned long long int var_3 = 14506951393504559255ULL;
short var_6 = (short)-8787;
unsigned char var_8 = (unsigned char)177;
unsigned char var_10 = (unsigned char)100;
int zero = 0;
int var_11 = -2096353759;
int var_12 = -1956954217;
unsigned int var_13 = 1949488988U;
long long int var_14 = -7849573095878833424LL;
short var_15 = (short)6206;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
