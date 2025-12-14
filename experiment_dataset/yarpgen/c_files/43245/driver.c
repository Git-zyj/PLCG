#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16578906039037206014ULL;
unsigned char var_3 = (unsigned char)63;
int var_4 = -1890924257;
unsigned char var_6 = (unsigned char)79;
unsigned long long int var_8 = 4281261361174730433ULL;
int zero = 0;
signed char var_11 = (signed char)-100;
int var_12 = -89274787;
long long int var_13 = 2576147919844507233LL;
long long int var_14 = 4606472263613397988LL;
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
