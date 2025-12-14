#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1720632795U;
long long int var_6 = 3598720317017531807LL;
unsigned char var_11 = (unsigned char)1;
int zero = 0;
short var_17 = (short)15914;
unsigned long long int var_18 = 7367395305037437555ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
