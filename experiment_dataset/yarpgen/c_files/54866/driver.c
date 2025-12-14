#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7196247468962712208ULL;
unsigned short var_4 = (unsigned short)37021;
int zero = 0;
long long int var_19 = 5716157114313406122LL;
unsigned short var_20 = (unsigned short)22339;
unsigned int var_21 = 2819751779U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
