#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)138;
short var_5 = (short)9386;
signed char var_7 = (signed char)28;
long long int var_16 = 7020566745941754015LL;
signed char var_17 = (signed char)-2;
int zero = 0;
unsigned short var_19 = (unsigned short)49855;
long long int var_20 = -3001982681939804575LL;
_Bool var_21 = (_Bool)1;
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
