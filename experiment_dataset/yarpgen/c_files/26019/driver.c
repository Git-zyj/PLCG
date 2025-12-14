#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 501493045201075911LL;
long long int var_1 = 7597186899974709498LL;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)-110;
short var_9 = (short)7280;
unsigned short var_11 = (unsigned short)42119;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 4809150303167259757LL;
long long int var_15 = -5719286308823685454LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
