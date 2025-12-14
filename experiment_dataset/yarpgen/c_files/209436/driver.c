#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11273;
unsigned char var_2 = (unsigned char)36;
int var_6 = 153192629;
signed char var_7 = (signed char)70;
unsigned char var_8 = (unsigned char)46;
unsigned char var_9 = (unsigned char)45;
unsigned short var_12 = (unsigned short)59053;
signed char var_13 = (signed char)-58;
short var_14 = (short)28835;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = -1277288469;
long long int var_19 = 3027584763556382720LL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-88;
void init() {
}

void checksum() {
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
