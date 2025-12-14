#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)61;
long long int var_5 = 4112420670236300195LL;
long long int var_15 = 7654255005236197496LL;
unsigned int var_19 = 1182781148U;
int zero = 0;
unsigned short var_20 = (unsigned short)7653;
unsigned short var_21 = (unsigned short)7968;
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
