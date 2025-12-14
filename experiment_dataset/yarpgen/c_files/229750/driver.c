#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9718552224328586498ULL;
long long int var_4 = 4282053060714170704LL;
signed char var_7 = (signed char)-98;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_18 = (short)9264;
unsigned short var_19 = (unsigned short)18587;
void init() {
}

void checksum() {
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
