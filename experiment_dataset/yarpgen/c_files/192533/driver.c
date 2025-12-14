#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
signed char var_4 = (signed char)1;
long long int var_7 = -4682088722002937071LL;
unsigned short var_8 = (unsigned short)57216;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)47;
unsigned int var_12 = 2021445004U;
int zero = 0;
long long int var_13 = 1291086570896652673LL;
unsigned int var_14 = 4124121178U;
unsigned int var_15 = 2404825219U;
int var_16 = -1446156724;
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
