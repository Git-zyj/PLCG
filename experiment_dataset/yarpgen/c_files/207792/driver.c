#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)20958;
unsigned char var_18 = (unsigned char)156;
unsigned int var_19 = 2034254270U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 17914652154275418616ULL;
unsigned long long int var_22 = 4660719859526290628ULL;
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
