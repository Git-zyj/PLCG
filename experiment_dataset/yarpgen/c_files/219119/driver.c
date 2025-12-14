#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)161;
unsigned long long int var_13 = 10668278761423651377ULL;
int var_14 = 1239040555;
int zero = 0;
unsigned short var_20 = (unsigned short)55446;
unsigned int var_21 = 2217413953U;
unsigned char var_22 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
