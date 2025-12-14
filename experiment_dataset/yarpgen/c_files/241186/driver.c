#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51666;
int var_2 = 1285288806;
long long int var_4 = -1397441934144923233LL;
int var_8 = 638498377;
unsigned short var_10 = (unsigned short)42056;
long long int var_12 = 6263908864428903983LL;
unsigned short var_13 = (unsigned short)43194;
int zero = 0;
signed char var_16 = (signed char)-17;
unsigned short var_17 = (unsigned short)58447;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
