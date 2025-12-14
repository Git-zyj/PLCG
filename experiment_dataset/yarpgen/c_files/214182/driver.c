#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)15;
short var_10 = (short)-12587;
unsigned int var_12 = 2925284662U;
unsigned short var_15 = (unsigned short)53588;
int var_17 = 306508307;
int zero = 0;
int var_19 = -835086615;
int var_20 = 564860945;
signed char var_21 = (signed char)14;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
