#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19383;
unsigned short var_3 = (unsigned short)32374;
unsigned short var_7 = (unsigned short)50280;
unsigned short var_8 = (unsigned short)53139;
unsigned short var_10 = (unsigned short)53238;
int zero = 0;
unsigned short var_13 = (unsigned short)37307;
unsigned short var_14 = (unsigned short)27420;
unsigned short var_15 = (unsigned short)59851;
unsigned short var_16 = (unsigned short)48606;
unsigned short var_17 = (unsigned short)65291;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
