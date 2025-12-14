#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)5325;
signed char var_4 = (signed char)-57;
unsigned long long int var_11 = 12941332586127949857ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -8809110664236843703LL;
unsigned short var_15 = (unsigned short)19393;
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
