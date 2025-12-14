#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14284082594488856464ULL;
unsigned int var_2 = 1453567305U;
long long int var_3 = -8474419340597636150LL;
unsigned short var_4 = (unsigned short)26420;
int var_5 = 718782046;
long long int var_6 = 4363800638342061528LL;
unsigned short var_7 = (unsigned short)58671;
signed char var_8 = (signed char)-110;
unsigned int var_10 = 1459820470U;
unsigned int var_11 = 856338915U;
unsigned int var_12 = 653669157U;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3500734817U;
int zero = 0;
long long int var_16 = 114286415903433767LL;
int var_17 = -2121760808;
unsigned long long int var_18 = 4013331178265710335ULL;
unsigned int var_19 = 1428879843U;
unsigned long long int var_20 = 6051074205883957077ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
