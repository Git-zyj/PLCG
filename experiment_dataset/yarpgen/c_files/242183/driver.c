#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9096317712808482074LL;
long long int var_3 = 9065722474327942019LL;
int var_4 = -1187015272;
signed char var_6 = (signed char)42;
signed char var_7 = (signed char)-65;
signed char var_10 = (signed char)95;
int var_12 = -1165918977;
long long int var_15 = 6708897608269515520LL;
long long int var_16 = 4395075827009060585LL;
long long int var_17 = -5290210342698538059LL;
int zero = 0;
unsigned long long int var_18 = 13132084243404102627ULL;
int var_19 = 1021614404;
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
