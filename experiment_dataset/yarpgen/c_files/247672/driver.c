#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13573712309879161344ULL;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)47171;
unsigned long long int var_5 = 9276654131972541899ULL;
long long int var_7 = 4258277060463590292LL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)82;
unsigned long long int var_15 = 12294849359787551173ULL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-26;
unsigned long long int var_19 = 12182896330922888063ULL;
int zero = 0;
long long int var_20 = 1277005691481363997LL;
unsigned short var_21 = (unsigned short)632;
_Bool var_22 = (_Bool)0;
long long int var_23 = -1610194713809849080LL;
unsigned short var_24 = (unsigned short)18504;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
