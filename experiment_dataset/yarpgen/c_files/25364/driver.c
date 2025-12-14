#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43818;
short var_3 = (short)23503;
long long int var_4 = -1048837863289061188LL;
int zero = 0;
unsigned short var_18 = (unsigned short)19404;
unsigned short var_19 = (unsigned short)20872;
unsigned long long int var_20 = 5687270608060463206ULL;
unsigned char var_21 = (unsigned char)101;
unsigned char var_22 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
