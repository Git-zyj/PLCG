#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 1269648740455243305ULL;
int var_8 = -1801889041;
unsigned char var_9 = (unsigned char)199;
short var_13 = (short)27561;
_Bool var_14 = (_Bool)1;
long long int var_16 = -1413839568301464090LL;
int zero = 0;
signed char var_18 = (signed char)-103;
int var_19 = -584729723;
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
