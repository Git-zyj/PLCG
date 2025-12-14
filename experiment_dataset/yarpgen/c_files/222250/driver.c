#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8312922044422940698LL;
unsigned char var_2 = (unsigned char)228;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-2150;
short var_5 = (short)-4794;
unsigned int var_6 = 789764912U;
unsigned long long int var_8 = 16902143090939927733ULL;
signed char var_10 = (signed char)33;
int var_12 = 1430440456;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)20038;
short var_16 = (short)-32099;
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
