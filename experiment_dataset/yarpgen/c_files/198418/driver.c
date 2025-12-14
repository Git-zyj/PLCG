#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)32942;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)19;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)181;
signed char var_14 = (signed char)68;
int zero = 0;
unsigned char var_15 = (unsigned char)156;
signed char var_16 = (signed char)71;
_Bool var_17 = (_Bool)1;
short var_18 = (short)32249;
signed char var_19 = (signed char)-21;
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
