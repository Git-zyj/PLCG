#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7953387642809896755LL;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)61228;
unsigned int var_9 = 3773655104U;
long long int var_10 = 5536459946276238729LL;
int zero = 0;
signed char var_12 = (signed char)39;
unsigned short var_13 = (unsigned short)57087;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
