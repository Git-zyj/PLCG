#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8432505833874562223LL;
long long int var_1 = -3081410619379348205LL;
unsigned char var_2 = (unsigned char)214;
signed char var_7 = (signed char)68;
signed char var_13 = (signed char)57;
int var_14 = -1151977044;
signed char var_15 = (signed char)-79;
int zero = 0;
unsigned int var_17 = 3893785682U;
signed char var_18 = (signed char)-103;
void init() {
}

void checksum() {
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
