#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7347204668770560509LL;
signed char var_3 = (signed char)-41;
unsigned long long int var_8 = 13283452758506173601ULL;
int zero = 0;
unsigned long long int var_10 = 4324373994400892519ULL;
signed char var_11 = (signed char)-90;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
