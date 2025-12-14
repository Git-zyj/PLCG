#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 247691373467615141LL;
unsigned int var_2 = 1942467967U;
signed char var_5 = (signed char)-54;
signed char var_17 = (signed char)-114;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 3085678279692286074LL;
unsigned short var_20 = (unsigned short)20608;
void init() {
}

void checksum() {
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
