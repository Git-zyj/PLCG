#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)11;
unsigned char var_6 = (unsigned char)108;
unsigned long long int var_10 = 3791648231009459768ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)228;
long long int var_12 = 517948813171470925LL;
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
