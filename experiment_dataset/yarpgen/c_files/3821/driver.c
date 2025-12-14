#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-61;
long long int var_3 = 8870924672232782634LL;
unsigned char var_7 = (unsigned char)148;
_Bool var_8 = (_Bool)1;
short var_9 = (short)4704;
unsigned short var_12 = (unsigned short)65392;
long long int var_17 = 3823048817047156018LL;
int zero = 0;
unsigned char var_18 = (unsigned char)211;
_Bool var_19 = (_Bool)0;
short var_20 = (short)8066;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
