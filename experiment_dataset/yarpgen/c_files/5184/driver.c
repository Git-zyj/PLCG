#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1013580786762802205LL;
short var_1 = (short)539;
unsigned long long int var_6 = 11010933624284945166ULL;
long long int var_8 = 4980482845450080006LL;
unsigned short var_9 = (unsigned short)19648;
int zero = 0;
unsigned long long int var_11 = 7671108759626858130ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 6722513158928422406ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
