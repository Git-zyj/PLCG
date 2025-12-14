#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6326772108835524041ULL;
int var_4 = -1135701671;
int var_8 = -1200252369;
int var_10 = -1457412278;
unsigned long long int var_11 = 16839150954772537673ULL;
int var_12 = -564940353;
unsigned int var_13 = 4167064571U;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 1830670671;
void init() {
}

void checksum() {
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
