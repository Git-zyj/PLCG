#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)61422;
unsigned short var_4 = (unsigned short)36342;
unsigned int var_6 = 3504299245U;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)5948;
long long int var_13 = 4301642620710236670LL;
signed char var_14 = (signed char)85;
int zero = 0;
unsigned short var_15 = (unsigned short)19986;
unsigned long long int var_16 = 398497309478171548ULL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)5211;
unsigned long long int var_19 = 513123702562886670ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
