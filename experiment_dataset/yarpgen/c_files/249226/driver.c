#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)42;
unsigned short var_5 = (unsigned short)41369;
unsigned long long int var_7 = 5676035583749193328ULL;
long long int var_9 = 6847680226207999495LL;
_Bool var_12 = (_Bool)0;
int var_13 = -76215624;
int zero = 0;
short var_20 = (short)23669;
long long int var_21 = 7008026326006773571LL;
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
