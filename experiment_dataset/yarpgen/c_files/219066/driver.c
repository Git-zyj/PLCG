#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 226130928508649601LL;
long long int var_11 = 2680085402509827821LL;
long long int var_15 = -5763496222813532187LL;
int zero = 0;
long long int var_17 = 8477910247913558516LL;
long long int var_18 = 8159697147641468594LL;
long long int var_19 = -6591677199352736042LL;
void init() {
}

void checksum() {
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
