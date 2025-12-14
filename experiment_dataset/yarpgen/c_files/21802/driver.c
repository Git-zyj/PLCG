#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)98;
short var_7 = (short)11636;
long long int var_9 = 690489465368249521LL;
unsigned short var_13 = (unsigned short)60485;
unsigned long long int var_14 = 12671126266616020144ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 6945643824702470500ULL;
long long int var_21 = -4063348832817836231LL;
signed char var_22 = (signed char)-47;
unsigned long long int var_23 = 6203124306576820655ULL;
unsigned long long int var_24 = 1194113497541418827ULL;
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
