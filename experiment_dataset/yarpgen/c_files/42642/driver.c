#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -104649079;
unsigned long long int var_1 = 10527819923908242107ULL;
long long int var_3 = -7828112466710861089LL;
unsigned long long int var_4 = 18287050876074067293ULL;
long long int var_7 = 7374372024097162995LL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 764392310U;
int var_12 = 1636073589;
long long int var_13 = -3846712098804192078LL;
unsigned long long int var_15 = 5912139847602057677ULL;
unsigned char var_19 = (unsigned char)71;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)249;
signed char var_22 = (signed char)57;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
