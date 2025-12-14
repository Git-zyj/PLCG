#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1946817605284443264LL;
long long int var_3 = 4923672585946950058LL;
long long int var_7 = 6597037719660291526LL;
long long int var_11 = 2248839889291826367LL;
long long int var_12 = -5054811566007805634LL;
long long int var_14 = -2326572404884808833LL;
int zero = 0;
long long int var_16 = 4704150944870987367LL;
long long int var_17 = -1307830818699985998LL;
long long int var_18 = 4300385642667416252LL;
long long int var_19 = 7156713234218728397LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
