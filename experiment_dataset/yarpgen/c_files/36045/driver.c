#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1095932571135655639LL;
long long int var_8 = -4895359073369351522LL;
unsigned short var_13 = (unsigned short)4666;
int zero = 0;
signed char var_19 = (signed char)122;
unsigned long long int var_20 = 6527139047785137717ULL;
long long int var_21 = -2584453061838855150LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
