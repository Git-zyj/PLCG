#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-12;
int var_7 = -404238510;
int var_8 = 1422589462;
int var_9 = 689775201;
int var_11 = 1645168011;
signed char var_12 = (signed char)112;
int var_14 = 1945978541;
int var_17 = -1138131622;
int var_19 = -1450340996;
int zero = 0;
int var_20 = 1482989832;
signed char var_21 = (signed char)42;
void init() {
}

void checksum() {
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
