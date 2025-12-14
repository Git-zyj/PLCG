#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13427;
long long int var_3 = -440714906009963492LL;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 461556180U;
int zero = 0;
unsigned long long int var_10 = 12999146439907770391ULL;
unsigned long long int var_11 = 10937658001650164460ULL;
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
