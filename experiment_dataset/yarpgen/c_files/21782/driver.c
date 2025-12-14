#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22639;
_Bool var_1 = (_Bool)0;
unsigned short var_4 = (unsigned short)54687;
unsigned char var_7 = (unsigned char)216;
unsigned char var_8 = (unsigned char)225;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)63499;
int zero = 0;
int var_12 = -1232741196;
signed char var_13 = (signed char)23;
long long int var_14 = 5547634578887319570LL;
void init() {
}

void checksum() {
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
