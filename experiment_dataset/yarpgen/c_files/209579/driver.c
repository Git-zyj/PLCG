#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)175;
unsigned char var_10 = (unsigned char)233;
signed char var_14 = (signed char)-105;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 7439934193547566340LL;
unsigned short var_22 = (unsigned short)35195;
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
