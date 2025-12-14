#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)187;
int var_4 = 997245950;
unsigned short var_6 = (unsigned short)46628;
int var_7 = -1026959492;
long long int var_8 = 3806880304416483251LL;
int var_11 = 976996079;
unsigned long long int var_13 = 11417153523664189728ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 3473011059U;
long long int var_19 = 3893512928289273008LL;
unsigned long long int var_20 = 10468757891339062176ULL;
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
