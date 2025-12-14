#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)99;
unsigned char var_9 = (unsigned char)156;
unsigned int var_10 = 345625475U;
int var_12 = -35415930;
signed char var_15 = (signed char)26;
signed char var_16 = (signed char)-62;
long long int var_18 = 5481512328775628497LL;
int zero = 0;
unsigned int var_19 = 4280492880U;
_Bool var_20 = (_Bool)0;
long long int var_21 = 1254816749770566625LL;
void init() {
}

void checksum() {
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
