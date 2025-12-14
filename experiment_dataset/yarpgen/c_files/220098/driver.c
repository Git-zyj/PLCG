#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
unsigned char var_2 = (unsigned char)148;
int var_3 = -1257738622;
_Bool var_4 = (_Bool)1;
int var_6 = 264950268;
int zero = 0;
int var_10 = 1482947765;
long long int var_11 = 1531266376965859670LL;
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
