#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2096338835U;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 4928469799201327024ULL;
unsigned short var_3 = (unsigned short)60068;
unsigned short var_4 = (unsigned short)52823;
unsigned short var_6 = (unsigned short)11321;
unsigned int var_7 = 3728999474U;
unsigned long long int var_9 = 16141466750628297274ULL;
int zero = 0;
short var_10 = (short)25224;
unsigned int var_11 = 1615635386U;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)7978;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
