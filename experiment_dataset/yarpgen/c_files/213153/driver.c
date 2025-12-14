#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-2;
unsigned char var_2 = (unsigned char)86;
long long int var_10 = -8023960766700412957LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_18 = 9060001808480022308LL;
long long int var_19 = -5295332964380203711LL;
signed char var_20 = (signed char)-58;
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
