#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
short var_4 = (short)-13515;
short var_7 = (short)15196;
long long int var_9 = -4874482240672472963LL;
int zero = 0;
long long int var_12 = -6363300841129024164LL;
unsigned char var_13 = (unsigned char)248;
void init() {
}

void checksum() {
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
