#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
unsigned char var_5 = (unsigned char)38;
int var_8 = -125452284;
unsigned int var_16 = 3612741371U;
int var_17 = 849392700;
int zero = 0;
long long int var_18 = 7057074491030585343LL;
short var_19 = (short)-27845;
void init() {
}

void checksum() {
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
