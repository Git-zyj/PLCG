#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7076972640402620700LL;
long long int var_5 = -2070142064417348807LL;
long long int var_6 = 906710992213749849LL;
long long int var_7 = -4070063210952412462LL;
int zero = 0;
long long int var_18 = 6945019844384868704LL;
long long int var_19 = -8847929152099803163LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
