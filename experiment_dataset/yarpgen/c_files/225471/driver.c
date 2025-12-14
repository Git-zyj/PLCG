#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 618993771U;
unsigned short var_2 = (unsigned short)27311;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-49;
signed char var_9 = (signed char)-81;
unsigned int var_11 = 2487402521U;
unsigned long long int var_12 = 13864502784993147548ULL;
long long int var_14 = -423029703850287339LL;
int zero = 0;
long long int var_16 = 5860848870174135290LL;
signed char var_17 = (signed char)-26;
unsigned long long int var_18 = 5968693136224433348ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
