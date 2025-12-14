#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4496179352557156376LL;
int var_1 = -843896441;
unsigned char var_3 = (unsigned char)17;
unsigned char var_6 = (unsigned char)164;
long long int var_9 = -439593653079655275LL;
unsigned long long int var_10 = 13814637702314000634ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)54420;
_Bool var_12 = (_Bool)1;
long long int var_13 = -3907472130347228765LL;
unsigned char var_14 = (unsigned char)235;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
