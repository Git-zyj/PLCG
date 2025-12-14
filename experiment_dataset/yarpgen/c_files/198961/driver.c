#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 609176445500554605ULL;
unsigned long long int var_2 = 13880262958440252159ULL;
long long int var_3 = -6295190916775912848LL;
_Bool var_4 = (_Bool)0;
int var_5 = -1078733792;
unsigned char var_8 = (unsigned char)43;
unsigned int var_9 = 463629350U;
unsigned long long int var_10 = 11414027591554823693ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)61421;
unsigned long long int var_12 = 3430368248010419187ULL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 8325946998204423510LL;
int var_15 = -1252522031;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
