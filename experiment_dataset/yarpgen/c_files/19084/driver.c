#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4366420150977446499LL;
unsigned long long int var_4 = 6310361348907176887ULL;
long long int var_5 = 4007574723955497183LL;
unsigned short var_6 = (unsigned short)57946;
short var_7 = (short)-20793;
signed char var_9 = (signed char)54;
unsigned int var_12 = 2198052623U;
int zero = 0;
short var_16 = (short)22877;
unsigned long long int var_17 = 858996949525285382ULL;
long long int var_18 = -1393543994598942109LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
