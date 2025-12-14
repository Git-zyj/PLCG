#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_12 = 1015643833;
unsigned short var_13 = (unsigned short)53146;
unsigned char var_16 = (unsigned char)172;
short var_18 = (short)25034;
short var_19 = (short)-30435;
int zero = 0;
unsigned long long int var_20 = 16868917807223369563ULL;
long long int var_21 = 3629489302823215105LL;
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
