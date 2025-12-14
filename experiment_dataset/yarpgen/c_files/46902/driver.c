#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-87;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 3999981915U;
unsigned char var_10 = (unsigned char)37;
int zero = 0;
long long int var_11 = 4798675182146165551LL;
long long int var_12 = -7914799145878423051LL;
_Bool var_13 = (_Bool)1;
int var_14 = -777413957;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
