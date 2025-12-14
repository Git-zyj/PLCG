#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25590;
int var_5 = -1427130172;
short var_12 = (short)1904;
short var_13 = (short)957;
int var_15 = 1874698704;
int zero = 0;
short var_18 = (short)13670;
unsigned char var_19 = (unsigned char)149;
unsigned short var_20 = (unsigned short)29907;
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
