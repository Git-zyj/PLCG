#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-23;
unsigned short var_3 = (unsigned short)62439;
signed char var_5 = (signed char)-35;
_Bool var_6 = (_Bool)1;
short var_8 = (short)-15672;
_Bool var_9 = (_Bool)1;
long long int var_10 = -8091862492224424677LL;
short var_11 = (short)-8474;
int zero = 0;
unsigned long long int var_17 = 4605794900153253060ULL;
int var_18 = -628326406;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
