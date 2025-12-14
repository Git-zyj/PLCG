#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8237322400656069072LL;
unsigned short var_3 = (unsigned short)2027;
short var_5 = (short)-4783;
unsigned char var_6 = (unsigned char)164;
int var_8 = -1445808121;
int zero = 0;
long long int var_10 = 3901255965131110234LL;
unsigned short var_11 = (unsigned short)24776;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
