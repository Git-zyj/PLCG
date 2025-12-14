#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12227;
long long int var_5 = 8428925682822979544LL;
long long int var_6 = -6198222654523732751LL;
unsigned short var_8 = (unsigned short)43929;
unsigned long long int var_10 = 4335530215976992199ULL;
int zero = 0;
unsigned int var_14 = 2843438269U;
unsigned char var_15 = (unsigned char)40;
unsigned long long int var_16 = 10078055980320370421ULL;
unsigned long long int var_17 = 16025050028318566810ULL;
int var_18 = -1383665031;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
