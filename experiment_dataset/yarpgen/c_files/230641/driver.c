#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)57177;
unsigned short var_10 = (unsigned short)43131;
unsigned int var_12 = 3919362600U;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_18 = -961061764;
short var_19 = (short)529;
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
