#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
unsigned int var_3 = 413750795U;
long long int var_4 = 7784601325665848281LL;
long long int var_6 = -4501384152981763393LL;
unsigned short var_7 = (unsigned short)43525;
short var_11 = (short)-26308;
int zero = 0;
short var_12 = (short)-29935;
short var_13 = (short)12649;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
