#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8447487424674178217LL;
long long int var_2 = 5259237887744999982LL;
signed char var_3 = (signed char)-59;
signed char var_4 = (signed char)-123;
int var_5 = -1309624138;
int var_9 = 1809445234;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-127;
int zero = 0;
signed char var_13 = (signed char)-24;
signed char var_14 = (signed char)57;
signed char var_15 = (signed char)72;
signed char var_16 = (signed char)-100;
int var_17 = -2046365039;
long long int var_18 = 2890437881397594408LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
