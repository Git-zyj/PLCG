#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 15013950561178319705ULL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)104;
signed char var_6 = (signed char)-19;
unsigned long long int var_7 = 4708389702502052935ULL;
unsigned long long int var_9 = 1521108213240439797ULL;
int zero = 0;
long long int var_11 = 7600817043468115400LL;
unsigned long long int var_12 = 10718109087225959609ULL;
signed char var_13 = (signed char)84;
long long int var_14 = 6452155600473182477LL;
signed char var_15 = (signed char)-92;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
