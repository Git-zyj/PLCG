#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 14832605609195803422ULL;
unsigned char var_3 = (unsigned char)68;
int var_7 = -191557305;
long long int var_12 = 4553410420487862456LL;
unsigned long long int var_16 = 16303672827099257321ULL;
unsigned char var_18 = (unsigned char)44;
int zero = 0;
unsigned int var_19 = 1030912991U;
unsigned char var_20 = (unsigned char)215;
signed char var_21 = (signed char)110;
unsigned long long int var_22 = 11232926733220012927ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
