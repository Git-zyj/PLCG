#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15376895120395777252ULL;
_Bool var_1 = (_Bool)0;
int var_3 = -1312386046;
signed char var_4 = (signed char)-45;
int var_12 = -1745769366;
unsigned long long int var_15 = 8429497693525888108ULL;
unsigned long long int var_16 = 17001541490395309773ULL;
unsigned int var_17 = 4141889225U;
int zero = 0;
int var_19 = -1691466722;
long long int var_20 = -3809605986607862018LL;
void init() {
}

void checksum() {
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
