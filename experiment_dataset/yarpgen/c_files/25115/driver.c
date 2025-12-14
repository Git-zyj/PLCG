#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1181603004;
unsigned long long int var_3 = 16990660531605039369ULL;
long long int var_4 = 7798258347978484021LL;
unsigned int var_5 = 4165030936U;
unsigned int var_7 = 3135091785U;
unsigned long long int var_10 = 12488694152829795555ULL;
int zero = 0;
int var_11 = 1744744951;
_Bool var_12 = (_Bool)1;
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
