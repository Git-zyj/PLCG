#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)209;
long long int var_3 = 7940367664026559538LL;
long long int var_19 = 548764928408310092LL;
int zero = 0;
unsigned int var_20 = 362354899U;
short var_21 = (short)-28196;
long long int var_22 = 2788354876034260287LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
