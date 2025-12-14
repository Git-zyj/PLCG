#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
signed char var_1 = (signed char)58;
unsigned char var_2 = (unsigned char)117;
long long int var_3 = 4835841467768840678LL;
long long int var_4 = 7490278884270327371LL;
unsigned char var_6 = (unsigned char)231;
signed char var_8 = (signed char)-80;
long long int var_11 = -8152364113555161558LL;
short var_16 = (short)32150;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-20792;
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
