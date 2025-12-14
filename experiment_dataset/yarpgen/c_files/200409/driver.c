#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = 1482500528;
unsigned long long int var_4 = 9639183758502661661ULL;
unsigned short var_7 = (unsigned short)16336;
unsigned short var_8 = (unsigned short)62322;
unsigned int var_9 = 1096206214U;
_Bool var_15 = (_Bool)0;
long long int var_17 = -464446792775521915LL;
unsigned short var_18 = (unsigned short)32261;
int zero = 0;
long long int var_20 = -1343892151901980041LL;
unsigned int var_21 = 1092309752U;
unsigned short var_22 = (unsigned short)40235;
int var_23 = 1690349930;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
