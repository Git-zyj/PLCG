#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
_Bool var_4 = (_Bool)0;
long long int var_7 = -5805382741128852198LL;
long long int var_9 = 3918859989536790011LL;
int var_10 = -1225601033;
long long int var_12 = -8480705352472592409LL;
int zero = 0;
unsigned long long int var_14 = 4473554748597779636ULL;
long long int var_15 = 7788442193483556783LL;
short var_16 = (short)24416;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
