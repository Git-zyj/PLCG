#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12948137090494364431ULL;
unsigned long long int var_4 = 6459139383469976387ULL;
signed char var_5 = (signed char)121;
long long int var_9 = -6736930164686257054LL;
unsigned short var_10 = (unsigned short)169;
signed char var_11 = (signed char)-13;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 16386365524385415729ULL;
unsigned long long int var_15 = 3866168411491151180ULL;
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
