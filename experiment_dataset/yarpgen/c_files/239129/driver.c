#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13556691742711402897ULL;
long long int var_2 = 8182963963397947099LL;
unsigned char var_3 = (unsigned char)246;
unsigned char var_4 = (unsigned char)10;
signed char var_6 = (signed char)89;
unsigned long long int var_14 = 1498109333562790763ULL;
unsigned long long int var_15 = 14262674130065164422ULL;
unsigned char var_19 = (unsigned char)103;
int zero = 0;
unsigned long long int var_20 = 3846247065053489058ULL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)57193;
int var_23 = -470869849;
long long int var_24 = 6406389063464048458LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
