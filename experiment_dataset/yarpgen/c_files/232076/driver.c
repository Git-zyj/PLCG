#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8291634114916202452LL;
int var_4 = 839541286;
unsigned char var_5 = (unsigned char)106;
int var_8 = -1335490305;
int zero = 0;
unsigned short var_17 = (unsigned short)31579;
unsigned short var_18 = (unsigned short)17496;
unsigned char var_19 = (unsigned char)111;
signed char var_20 = (signed char)50;
unsigned char var_21 = (unsigned char)7;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
