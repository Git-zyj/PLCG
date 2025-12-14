#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)166;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)22;
signed char var_9 = (signed char)-57;
unsigned int var_12 = 2244897371U;
int zero = 0;
long long int var_16 = 1393706874995946704LL;
unsigned long long int var_17 = 16739823729912818806ULL;
signed char var_18 = (signed char)5;
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
