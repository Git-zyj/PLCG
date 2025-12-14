#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 588482301;
long long int var_6 = 6594952252843821662LL;
long long int var_8 = -3682451984402420381LL;
unsigned long long int var_9 = 9660988032860734291ULL;
signed char var_12 = (signed char)-116;
signed char var_13 = (signed char)54;
signed char var_14 = (signed char)27;
int zero = 0;
int var_19 = -1175269692;
signed char var_20 = (signed char)-31;
_Bool var_21 = (_Bool)1;
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
