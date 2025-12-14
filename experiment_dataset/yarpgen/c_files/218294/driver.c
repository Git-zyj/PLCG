#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22770;
signed char var_2 = (signed char)-88;
unsigned long long int var_3 = 9480420579041230108ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)31898;
unsigned short var_13 = (unsigned short)13334;
unsigned int var_15 = 3564010622U;
int zero = 0;
short var_16 = (short)-13911;
short var_17 = (short)-24373;
unsigned short var_18 = (unsigned short)57227;
signed char var_19 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
