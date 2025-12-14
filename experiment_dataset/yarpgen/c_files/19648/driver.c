#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)40;
int var_1 = 1928272755;
unsigned short var_2 = (unsigned short)44961;
int var_3 = 1176879818;
unsigned short var_4 = (unsigned short)12462;
int var_5 = 7690277;
int var_6 = 1388941490;
int var_9 = -66259703;
int zero = 0;
unsigned short var_10 = (unsigned short)62364;
signed char var_11 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
