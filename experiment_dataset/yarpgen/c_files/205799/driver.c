#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3949811462694052980LL;
long long int var_7 = -4085196844089402595LL;
unsigned long long int var_8 = 13383456861177787392ULL;
unsigned char var_17 = (unsigned char)97;
int zero = 0;
long long int var_18 = 1536919348766507093LL;
unsigned char var_19 = (unsigned char)22;
unsigned char var_20 = (unsigned char)202;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
