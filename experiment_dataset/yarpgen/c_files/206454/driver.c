#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)26;
unsigned long long int var_4 = 1952169781830350605ULL;
unsigned short var_10 = (unsigned short)14072;
unsigned short var_11 = (unsigned short)55305;
signed char var_12 = (signed char)-82;
long long int var_13 = 3233538938139331571LL;
int zero = 0;
long long int var_16 = -4921974778540452270LL;
unsigned short var_17 = (unsigned short)11896;
signed char var_18 = (signed char)80;
signed char var_19 = (signed char)87;
unsigned int var_20 = 3800192644U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
