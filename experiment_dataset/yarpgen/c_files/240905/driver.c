#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
int var_3 = -523075849;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 4371658214299436618ULL;
int zero = 0;
long long int var_16 = 8859370839174784625LL;
unsigned long long int var_17 = 18401284795763425085ULL;
unsigned long long int var_18 = 13452213144188275998ULL;
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
