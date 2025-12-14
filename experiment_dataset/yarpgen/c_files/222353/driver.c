#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5637419979884769360LL;
signed char var_1 = (signed char)-101;
signed char var_2 = (signed char)46;
long long int var_3 = 49837122282209078LL;
unsigned int var_5 = 1160124034U;
long long int var_6 = 2457608466430434211LL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-42;
signed char var_12 = (signed char)21;
signed char var_13 = (signed char)-56;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 2030821343;
long long int var_19 = 2663676451449344384LL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
