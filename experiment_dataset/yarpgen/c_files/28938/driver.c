#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5741;
_Bool var_1 = (_Bool)1;
long long int var_8 = -2958050227565720386LL;
short var_12 = (short)-6445;
int zero = 0;
unsigned short var_13 = (unsigned short)3010;
unsigned char var_14 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
