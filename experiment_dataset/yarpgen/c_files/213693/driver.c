#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29675;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)42;
long long int var_8 = -3711828133136344054LL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)4;
unsigned char var_14 = (unsigned char)123;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -2626853581487398895LL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 5153377345148728912ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
