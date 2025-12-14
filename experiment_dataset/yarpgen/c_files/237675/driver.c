#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 609939699U;
int var_7 = -436212282;
unsigned short var_9 = (unsigned short)31096;
int zero = 0;
unsigned short var_10 = (unsigned short)40309;
int var_11 = -1128841335;
signed char var_12 = (signed char)-88;
unsigned char var_13 = (unsigned char)110;
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
