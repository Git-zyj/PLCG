#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned char var_8 = (unsigned char)5;
unsigned char var_9 = (unsigned char)94;
unsigned char var_10 = (unsigned char)28;
int var_11 = -274340259;
long long int var_14 = -8170335063736540804LL;
int zero = 0;
unsigned char var_17 = (unsigned char)61;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)2899;
unsigned short var_20 = (unsigned short)1104;
unsigned short var_21 = (unsigned short)40511;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
