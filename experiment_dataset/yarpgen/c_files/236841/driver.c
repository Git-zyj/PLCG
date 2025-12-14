#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6515185592704458601LL;
unsigned int var_5 = 2205429614U;
unsigned int var_8 = 2393505947U;
unsigned short var_10 = (unsigned short)29239;
unsigned long long int var_14 = 18035081159412883230ULL;
unsigned short var_15 = (unsigned short)18248;
int var_16 = -1779935024;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 4631012918091456283LL;
void init() {
}

void checksum() {
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
