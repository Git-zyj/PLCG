#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 17407518268469854263ULL;
unsigned long long int var_12 = 1150679178107441950ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_18 = 6185411996045455369ULL;
int zero = 0;
int var_19 = -1747774212;
unsigned short var_20 = (unsigned short)54417;
unsigned short var_21 = (unsigned short)59938;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
