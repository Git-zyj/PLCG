#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63915;
long long int var_2 = -7011129318834655890LL;
_Bool var_4 = (_Bool)1;
int var_6 = 1331974869;
unsigned long long int var_7 = 13280489791510872773ULL;
short var_8 = (short)20865;
unsigned long long int var_9 = 5004079738944674173ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)3843;
int zero = 0;
short var_12 = (short)10068;
unsigned int var_13 = 433968329U;
unsigned int var_14 = 2389161645U;
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
