#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 450917759128845340ULL;
unsigned short var_2 = (unsigned short)19529;
unsigned char var_7 = (unsigned char)93;
unsigned char var_12 = (unsigned char)51;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 5393840974897996609ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
