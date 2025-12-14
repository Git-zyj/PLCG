#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)154;
long long int var_6 = 3459828046288669137LL;
unsigned char var_9 = (unsigned char)195;
unsigned char var_13 = (unsigned char)18;
int zero = 0;
short var_14 = (short)16842;
unsigned short var_15 = (unsigned short)4730;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
