#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1449580689629950875LL;
unsigned short var_11 = (unsigned short)6597;
unsigned short var_12 = (unsigned short)17272;
unsigned int var_14 = 435995835U;
long long int var_15 = 3473478556321907174LL;
int zero = 0;
signed char var_20 = (signed char)-37;
unsigned int var_21 = 2892387980U;
void init() {
}

void checksum() {
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
