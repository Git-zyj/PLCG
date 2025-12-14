#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)213;
unsigned short var_4 = (unsigned short)60201;
short var_5 = (short)30988;
unsigned int var_6 = 1099716615U;
unsigned int var_7 = 1492505263U;
long long int var_8 = -5283485800983295852LL;
unsigned int var_13 = 3439416263U;
long long int var_15 = 6732138389278491754LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)103;
unsigned long long int var_19 = 3387539889720742898ULL;
void init() {
}

void checksum() {
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
