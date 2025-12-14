#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2241999424136102712ULL;
unsigned char var_7 = (unsigned char)90;
short var_8 = (short)9126;
unsigned long long int var_10 = 15783154980655111186ULL;
long long int var_13 = -7392780040878144766LL;
int zero = 0;
unsigned char var_17 = (unsigned char)104;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
