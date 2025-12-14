#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)140;
long long int var_7 = -6451034665535029896LL;
long long int var_8 = -925973472040430982LL;
signed char var_12 = (signed char)-35;
signed char var_17 = (signed char)40;
int zero = 0;
unsigned long long int var_18 = 141413027714378502ULL;
unsigned long long int var_19 = 3402256185935597752ULL;
_Bool var_20 = (_Bool)1;
int var_21 = 995313338;
unsigned char var_22 = (unsigned char)215;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
