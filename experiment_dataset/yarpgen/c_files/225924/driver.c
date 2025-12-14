#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 862130562;
long long int var_11 = 8284784855518423474LL;
short var_13 = (short)-20785;
unsigned short var_14 = (unsigned short)59085;
long long int var_15 = -3967753100820791931LL;
int zero = 0;
unsigned int var_18 = 1185474912U;
unsigned char var_19 = (unsigned char)96;
_Bool var_20 = (_Bool)1;
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
