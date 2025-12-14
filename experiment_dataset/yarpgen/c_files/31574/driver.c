#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8196799781984571082LL;
unsigned char var_4 = (unsigned char)117;
unsigned char var_6 = (unsigned char)203;
unsigned char var_7 = (unsigned char)229;
signed char var_8 = (signed char)46;
long long int var_9 = -7200596186723371004LL;
unsigned char var_10 = (unsigned char)247;
int zero = 0;
unsigned int var_19 = 3105131890U;
unsigned int var_20 = 3243910229U;
int var_21 = -275773193;
unsigned long long int var_22 = 8814314484351031146ULL;
int var_23 = -709567647;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
