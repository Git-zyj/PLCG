#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2016780503U;
long long int var_1 = 4634325679677147118LL;
short var_2 = (short)25488;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 885927701U;
unsigned long long int var_13 = 18128611444173558365ULL;
int zero = 0;
signed char var_20 = (signed char)-54;
short var_21 = (short)22461;
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
