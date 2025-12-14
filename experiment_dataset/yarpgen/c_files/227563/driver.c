#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
unsigned int var_1 = 2326550021U;
signed char var_2 = (signed char)-82;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 17852287819675942793ULL;
unsigned long long int var_6 = 11603605443556135270ULL;
signed char var_8 = (signed char)52;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 750604422U;
int zero = 0;
unsigned short var_12 = (unsigned short)62309;
short var_13 = (short)7453;
unsigned int var_14 = 646676722U;
unsigned long long int var_15 = 6855813776457494273ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
