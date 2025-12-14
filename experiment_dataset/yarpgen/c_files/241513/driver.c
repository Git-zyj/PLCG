#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7502036046852773028ULL;
long long int var_5 = -71192883004130398LL;
_Bool var_8 = (_Bool)1;
int var_11 = 585083244;
int zero = 0;
unsigned short var_13 = (unsigned short)62492;
short var_14 = (short)-19752;
short var_15 = (short)-10260;
void init() {
}

void checksum() {
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
