#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1860655733;
_Bool var_1 = (_Bool)1;
long long int var_3 = -848656330580761037LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 16981941155229409856ULL;
long long int var_8 = 7190782185371377739LL;
long long int var_9 = -961874515318597141LL;
unsigned char var_11 = (unsigned char)2;
unsigned long long int var_13 = 3567931197240936421ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 2583406215590414710ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)65042;
unsigned char var_22 = (unsigned char)79;
long long int var_23 = -7584383703767945594LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
