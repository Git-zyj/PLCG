#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12657703540654695472ULL;
unsigned char var_1 = (unsigned char)97;
unsigned long long int var_2 = 12624301399923102307ULL;
unsigned long long int var_3 = 7856773269095195895ULL;
long long int var_6 = -2293659058277525254LL;
long long int var_7 = 5714342385731572594LL;
long long int var_8 = 134116935120009108LL;
int var_10 = 1010334006;
int zero = 0;
long long int var_11 = 6363583421989759758LL;
unsigned long long int var_12 = 6783879819624168136ULL;
unsigned long long int var_13 = 3869229243313750862ULL;
unsigned char var_14 = (unsigned char)235;
void init() {
}

void checksum() {
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
