#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2496916665U;
unsigned long long int var_3 = 3727020173001557842ULL;
unsigned short var_7 = (unsigned short)381;
unsigned short var_9 = (unsigned short)60928;
int zero = 0;
unsigned long long int var_11 = 7911406344139914193ULL;
unsigned int var_12 = 577937229U;
unsigned long long int var_13 = 4604428199816892550ULL;
unsigned char var_14 = (unsigned char)70;
unsigned int var_15 = 3098991457U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
