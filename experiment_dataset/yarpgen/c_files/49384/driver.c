#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-63;
unsigned int var_7 = 2269005425U;
unsigned short var_13 = (unsigned short)5078;
long long int var_15 = -3457755264035086982LL;
long long int var_17 = 169800526852713668LL;
int zero = 0;
short var_19 = (short)7574;
unsigned long long int var_20 = 17580949718736037017ULL;
void init() {
}

void checksum() {
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
