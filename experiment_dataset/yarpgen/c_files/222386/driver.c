#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)17557;
unsigned int var_5 = 409079523U;
unsigned int var_11 = 1268187395U;
unsigned char var_14 = (unsigned char)137;
int zero = 0;
int var_20 = -1187353521;
int var_21 = -1117998836;
unsigned char var_22 = (unsigned char)228;
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
