#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21299;
unsigned long long int var_3 = 3273729830085839606ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 1859815649631196020ULL;
int zero = 0;
int var_12 = 1434499460;
unsigned long long int var_13 = 7207505642233299273ULL;
unsigned long long int var_14 = 11581079287049218605ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 123367098271491528ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
