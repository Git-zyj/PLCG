#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1992936702U;
unsigned char var_7 = (unsigned char)95;
_Bool var_9 = (_Bool)1;
long long int var_11 = 4205592501897975049LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = -3181438782753985544LL;
int zero = 0;
int var_15 = 1863111880;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 10824688186499704334ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
