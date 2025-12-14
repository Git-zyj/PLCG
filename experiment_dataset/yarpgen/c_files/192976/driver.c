#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
unsigned char var_1 = (unsigned char)52;
signed char var_5 = (signed char)-10;
signed char var_7 = (signed char)-31;
unsigned long long int var_9 = 7471794594896902464ULL;
signed char var_10 = (signed char)-43;
signed char var_11 = (signed char)68;
short var_12 = (short)-16113;
int zero = 0;
unsigned char var_13 = (unsigned char)204;
long long int var_14 = 2968965409323108842LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
