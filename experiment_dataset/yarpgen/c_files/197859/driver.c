#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8371959735374416527LL;
int var_2 = -942898708;
short var_4 = (short)-8811;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)25770;
int var_13 = 194107348;
int zero = 0;
short var_14 = (short)-31559;
long long int var_15 = 5884076033263832293LL;
unsigned char var_16 = (unsigned char)4;
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
