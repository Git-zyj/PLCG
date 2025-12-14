#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1821900548;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3294483943U;
signed char var_6 = (signed char)-106;
unsigned char var_8 = (unsigned char)233;
unsigned char var_10 = (unsigned char)156;
unsigned short var_13 = (unsigned short)26242;
unsigned int var_15 = 2973901988U;
unsigned char var_16 = (unsigned char)85;
signed char var_17 = (signed char)105;
int zero = 0;
unsigned int var_18 = 572530720U;
unsigned char var_19 = (unsigned char)25;
long long int var_20 = 3847235031096465692LL;
unsigned char var_21 = (unsigned char)117;
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
