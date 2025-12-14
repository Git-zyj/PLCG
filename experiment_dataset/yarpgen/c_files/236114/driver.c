#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
signed char var_1 = (signed char)-41;
_Bool var_9 = (_Bool)0;
long long int var_18 = -5779751543817448931LL;
int zero = 0;
unsigned short var_19 = (unsigned short)16190;
signed char var_20 = (signed char)-105;
unsigned char var_21 = (unsigned char)10;
short var_22 = (short)11749;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
