#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-7863;
unsigned short var_6 = (unsigned short)22108;
short var_7 = (short)-25521;
unsigned short var_12 = (unsigned short)20971;
int zero = 0;
short var_17 = (short)-546;
long long int var_18 = -822028065055566406LL;
signed char var_19 = (signed char)-59;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
