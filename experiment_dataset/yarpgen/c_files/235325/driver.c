#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3211620458399275031ULL;
long long int var_11 = -6358098784876057744LL;
_Bool var_12 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)23345;
int var_21 = 473245439;
long long int var_22 = 8143896149530836183LL;
void init() {
}

void checksum() {
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
