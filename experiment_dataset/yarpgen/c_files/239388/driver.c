#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32987;
unsigned short var_7 = (unsigned short)50872;
long long int var_8 = 1403176427767528622LL;
int zero = 0;
long long int var_11 = 5298053474917769754LL;
signed char var_12 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
