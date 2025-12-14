#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2432331814349736062LL;
unsigned long long int var_5 = 9956949771206456363ULL;
unsigned long long int var_7 = 10246861384908814996ULL;
long long int var_8 = 3774381155709114098LL;
unsigned long long int var_10 = 2714403811234668305ULL;
int zero = 0;
int var_12 = -263345398;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
