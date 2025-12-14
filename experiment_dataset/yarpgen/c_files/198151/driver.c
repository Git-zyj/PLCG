#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -144597534;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-16086;
signed char var_5 = (signed char)-103;
_Bool var_7 = (_Bool)1;
long long int var_9 = 4255697205567356613LL;
int zero = 0;
unsigned short var_10 = (unsigned short)18221;
long long int var_11 = 7099214552511791599LL;
unsigned long long int var_12 = 355497555174492070ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
