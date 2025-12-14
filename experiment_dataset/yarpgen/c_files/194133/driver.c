#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4889287416099385217LL;
signed char var_2 = (signed char)-69;
unsigned long long int var_3 = 2778199434486826730ULL;
unsigned short var_5 = (unsigned short)49959;
short var_6 = (short)23392;
long long int var_7 = 8380272089450212687LL;
short var_9 = (short)14023;
unsigned int var_12 = 2942998741U;
int zero = 0;
short var_13 = (short)-4768;
unsigned char var_14 = (unsigned char)216;
unsigned char var_15 = (unsigned char)11;
void init() {
}

void checksum() {
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
