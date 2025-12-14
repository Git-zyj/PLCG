#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 664727878;
short var_3 = (short)-27598;
long long int var_6 = -2791912394738559797LL;
long long int var_8 = -8284878654680788281LL;
unsigned short var_9 = (unsigned short)64494;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
