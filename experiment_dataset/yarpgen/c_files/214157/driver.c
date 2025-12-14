#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15343;
unsigned long long int var_6 = 6564494891128460581ULL;
signed char var_9 = (signed char)-97;
unsigned long long int var_12 = 12281378055227741229ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)44521;
unsigned long long int var_15 = 8354258090176584687ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
