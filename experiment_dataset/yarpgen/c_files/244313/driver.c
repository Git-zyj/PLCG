#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-109;
signed char var_4 = (signed char)11;
int var_5 = -266182848;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 16917580690543432430ULL;
short var_10 = (short)19642;
unsigned long long int var_11 = 8715900658061523199ULL;
int zero = 0;
unsigned int var_13 = 2198009987U;
unsigned long long int var_14 = 10216837595576126346ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
