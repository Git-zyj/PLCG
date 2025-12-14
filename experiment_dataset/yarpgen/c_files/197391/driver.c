#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27687;
long long int var_1 = -833658955151530396LL;
short var_2 = (short)-31748;
int var_4 = -968116003;
unsigned char var_6 = (unsigned char)32;
unsigned long long int var_12 = 2326225462218011913ULL;
int var_13 = -1925047207;
unsigned int var_14 = 2034711041U;
int zero = 0;
unsigned short var_15 = (unsigned short)58651;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
