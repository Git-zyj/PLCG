#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -185238588251719613LL;
unsigned short var_2 = (unsigned short)21555;
unsigned char var_13 = (unsigned char)96;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 3948759711246217380ULL;
int zero = 0;
short var_20 = (short)15309;
unsigned long long int var_21 = 6614261262303335163ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
