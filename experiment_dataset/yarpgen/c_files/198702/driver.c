#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1738575149502900513ULL;
unsigned long long int var_2 = 4536430643725232130ULL;
unsigned short var_3 = (unsigned short)56176;
_Bool var_6 = (_Bool)1;
unsigned int var_9 = 4078008854U;
unsigned int var_10 = 344180211U;
unsigned int var_12 = 3421548185U;
int zero = 0;
unsigned long long int var_13 = 4526037466188900404ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 12127346091890804177ULL;
signed char var_16 = (signed char)-29;
void init() {
}

void checksum() {
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
