#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3336323473223659234LL;
unsigned char var_9 = (unsigned char)189;
unsigned short var_11 = (unsigned short)24216;
int zero = 0;
long long int var_17 = -8402107141971861043LL;
unsigned long long int var_18 = 785466062928771320ULL;
unsigned long long int var_19 = 8244720804664419829ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
