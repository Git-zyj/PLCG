#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1860302336U;
long long int var_2 = -1931234076189388292LL;
unsigned char var_4 = (unsigned char)211;
int var_6 = -1029938369;
short var_9 = (short)-28603;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 1162634768457510776ULL;
unsigned long long int var_14 = 15180689277988443553ULL;
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
