#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7449192774287451734LL;
_Bool var_1 = (_Bool)0;
int var_2 = -1424900220;
unsigned long long int var_3 = 15870050985300493284ULL;
unsigned short var_4 = (unsigned short)32520;
long long int var_5 = 6914590253208406299LL;
int var_9 = 725428327;
int zero = 0;
unsigned long long int var_10 = 14614776488154112901ULL;
short var_11 = (short)-20095;
unsigned int var_12 = 1425566366U;
long long int var_13 = 2579602406967293959LL;
int var_14 = -86055431;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
