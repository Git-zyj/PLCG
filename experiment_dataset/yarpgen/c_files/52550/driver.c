#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6132966858694799208ULL;
unsigned long long int var_3 = 15574051231826571827ULL;
unsigned long long int var_5 = 10156029444733563402ULL;
unsigned long long int var_11 = 9096679621133673221ULL;
unsigned long long int var_14 = 8126790472691833452ULL;
unsigned long long int var_15 = 7782626726239101014ULL;
int zero = 0;
unsigned long long int var_18 = 13956650968575029354ULL;
unsigned long long int var_19 = 11095440689389226016ULL;
unsigned long long int var_20 = 9090441817061440821ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
