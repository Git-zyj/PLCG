#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1749395781;
short var_3 = (short)5076;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)37084;
int zero = 0;
short var_11 = (short)11333;
unsigned long long int var_12 = 6398863178943020620ULL;
long long int var_13 = 4210070700680307735LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
