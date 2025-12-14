#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10215963196306803570ULL;
int var_7 = -319226078;
int var_8 = 452343961;
unsigned char var_9 = (unsigned char)70;
long long int var_10 = -4796124111011405473LL;
int zero = 0;
int var_12 = 1133800596;
long long int var_13 = 2687528463981643074LL;
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
