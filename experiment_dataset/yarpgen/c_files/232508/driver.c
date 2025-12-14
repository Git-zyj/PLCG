#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13198;
_Bool var_2 = (_Bool)1;
short var_5 = (short)-29039;
long long int var_8 = -1092345730447568221LL;
unsigned char var_9 = (unsigned char)215;
int zero = 0;
unsigned short var_11 = (unsigned short)4084;
long long int var_12 = 3495164124691826262LL;
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
