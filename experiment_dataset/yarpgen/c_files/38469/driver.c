#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29583;
int var_3 = -991851325;
int var_4 = 691850792;
unsigned long long int var_5 = 7074903319161237013ULL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 6987753956365536105ULL;
int var_11 = -540536576;
short var_12 = (short)-3031;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
