#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2058820031;
int var_4 = -1000668191;
int var_6 = -550736955;
int var_11 = -705497308;
int var_13 = -869207351;
int var_17 = 1029090709;
int zero = 0;
int var_18 = -1218119877;
int var_19 = -412916802;
int var_20 = -1748405971;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
