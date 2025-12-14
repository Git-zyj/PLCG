#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 107195768U;
short var_3 = (short)8256;
unsigned short var_7 = (unsigned short)50431;
unsigned int var_11 = 485882830U;
unsigned int var_12 = 4137749731U;
short var_13 = (short)13958;
unsigned int var_15 = 1864436111U;
unsigned short var_16 = (unsigned short)52878;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3159278126U;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 16570186340091873757ULL;
long long int var_21 = 6575971874537703940LL;
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
