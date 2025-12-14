#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)68;
unsigned short var_2 = (unsigned short)35803;
long long int var_3 = 8107624108969187894LL;
signed char var_5 = (signed char)-125;
short var_6 = (short)13767;
int var_13 = 635819124;
unsigned long long int var_15 = 10544055022058458695ULL;
int zero = 0;
long long int var_17 = 2093914536020562257LL;
int var_18 = 1546591501;
int var_19 = -1702986574;
void init() {
}

void checksum() {
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
