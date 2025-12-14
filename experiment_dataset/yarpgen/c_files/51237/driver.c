#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 899992742U;
unsigned short var_2 = (unsigned short)43587;
int var_3 = -1549619391;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 4194058283U;
unsigned int var_7 = 1463094194U;
unsigned int var_9 = 1177153380U;
int zero = 0;
unsigned long long int var_10 = 3777507957359468284ULL;
int var_11 = -1382086830;
unsigned int var_12 = 3117984965U;
unsigned int var_13 = 106015430U;
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
