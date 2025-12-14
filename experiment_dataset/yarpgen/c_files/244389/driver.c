#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-55;
unsigned char var_2 = (unsigned char)162;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 594488564U;
unsigned short var_7 = (unsigned short)5998;
unsigned long long int var_9 = 10103813255417036395ULL;
int zero = 0;
long long int var_10 = 4281739024958602493LL;
signed char var_11 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
