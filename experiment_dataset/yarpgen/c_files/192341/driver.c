#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11694997895620633682ULL;
unsigned long long int var_3 = 6584938706005425437ULL;
unsigned char var_5 = (unsigned char)159;
unsigned char var_7 = (unsigned char)111;
unsigned long long int var_9 = 13824218091103209227ULL;
unsigned long long int var_11 = 2252591529688196008ULL;
int zero = 0;
unsigned int var_12 = 23113531U;
long long int var_13 = 4731823278799910049LL;
long long int var_14 = 219712705433728881LL;
unsigned short var_15 = (unsigned short)52941;
unsigned long long int var_16 = 377856826149661292ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
