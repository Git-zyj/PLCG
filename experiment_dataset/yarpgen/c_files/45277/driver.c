#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31534;
short var_3 = (short)-1896;
short var_4 = (short)18033;
short var_5 = (short)24476;
short var_6 = (short)-5994;
short var_7 = (short)16051;
short var_8 = (short)25236;
short var_9 = (short)3817;
short var_10 = (short)22856;
short var_13 = (short)9254;
short var_14 = (short)-4578;
short var_15 = (short)-6767;
short var_16 = (short)25801;
int zero = 0;
short var_19 = (short)-6582;
short var_20 = (short)5108;
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
