#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18070;
long long int var_2 = 4288231792679600875LL;
short var_7 = (short)-16446;
long long int var_10 = 1363166609395205305LL;
long long int var_11 = -7981303176944411337LL;
long long int var_17 = 3790586213314501001LL;
int zero = 0;
int var_18 = 73377286;
short var_19 = (short)-27077;
signed char var_20 = (signed char)41;
long long int var_21 = -2110977634029379181LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
