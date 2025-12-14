#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6068117352637662285LL;
short var_2 = (short)-28694;
unsigned short var_6 = (unsigned short)58391;
long long int var_8 = -3325042611469887365LL;
long long int var_9 = 8225813731742029289LL;
int var_12 = -1671455131;
unsigned short var_14 = (unsigned short)60010;
short var_15 = (short)31485;
int zero = 0;
signed char var_18 = (signed char)-125;
unsigned int var_19 = 2182931654U;
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
