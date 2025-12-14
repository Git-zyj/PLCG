#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)581;
unsigned short var_9 = (unsigned short)14207;
signed char var_15 = (signed char)52;
unsigned long long int var_16 = 11844134588418161235ULL;
int var_17 = -700244830;
int zero = 0;
unsigned short var_18 = (unsigned short)5780;
unsigned short var_19 = (unsigned short)25034;
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
