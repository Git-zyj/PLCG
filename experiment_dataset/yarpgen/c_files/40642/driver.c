#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2313151461U;
unsigned short var_7 = (unsigned short)8472;
unsigned char var_9 = (unsigned char)181;
short var_11 = (short)2757;
unsigned long long int var_12 = 15628675106702505955ULL;
unsigned short var_15 = (unsigned short)28403;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = 347730050;
unsigned short var_18 = (unsigned short)5889;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
