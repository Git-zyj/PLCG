#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1336086797;
long long int var_2 = 3614853116738589283LL;
unsigned short var_7 = (unsigned short)45813;
unsigned long long int var_10 = 12109538272702964291ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 687798436U;
unsigned long long int var_14 = 13673432928072962872ULL;
short var_15 = (short)-2806;
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
