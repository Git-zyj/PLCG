#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10859598662850255519ULL;
long long int var_2 = -9031231766399724508LL;
long long int var_3 = 7281597356466548729LL;
unsigned char var_6 = (unsigned char)222;
long long int var_7 = 3031093895636724534LL;
signed char var_8 = (signed char)61;
long long int var_9 = -8883378007980045299LL;
signed char var_10 = (signed char)41;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 16075167232507671117ULL;
signed char var_18 = (signed char)-116;
unsigned char var_19 = (unsigned char)138;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
