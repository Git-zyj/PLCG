#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27880;
unsigned long long int var_3 = 17392436304426705763ULL;
long long int var_4 = 6352370856343214587LL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 16159973926737759058ULL;
long long int var_10 = -467452457995261256LL;
unsigned short var_11 = (unsigned short)20053;
int zero = 0;
int var_12 = 412117004;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)16;
signed char var_15 = (signed char)-60;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
