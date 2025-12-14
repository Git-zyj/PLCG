#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3061960309536728150LL;
long long int var_8 = -6732328659100031918LL;
unsigned short var_12 = (unsigned short)62892;
int zero = 0;
unsigned char var_13 = (unsigned char)180;
unsigned char var_14 = (unsigned char)168;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
