#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5738279834341104844LL;
long long int var_7 = -4739536885799694890LL;
short var_10 = (short)14062;
unsigned int var_11 = 3432915766U;
int zero = 0;
unsigned char var_15 = (unsigned char)164;
unsigned char var_16 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
