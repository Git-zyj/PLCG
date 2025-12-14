#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-77;
int var_2 = 411342782;
unsigned long long int var_3 = 3836165545101512216ULL;
long long int var_4 = 7313411740553939392LL;
unsigned int var_5 = 2327798663U;
unsigned short var_6 = (unsigned short)60365;
unsigned int var_7 = 3104330955U;
int var_8 = -2140302886;
unsigned int var_9 = 1449688230U;
unsigned short var_11 = (unsigned short)517;
int var_12 = 1208008947;
int zero = 0;
int var_13 = 1399652666;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 9736329884183129495ULL;
unsigned int var_16 = 1957054907U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
