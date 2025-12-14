#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
_Bool var_6 = (_Bool)1;
int var_16 = 612747770;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 1984321386752568402LL;
unsigned short var_20 = (unsigned short)41286;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
