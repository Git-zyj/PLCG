#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9750256641072840102ULL;
unsigned int var_2 = 500191304U;
signed char var_7 = (signed char)88;
unsigned long long int var_8 = 17820196156483391469ULL;
long long int var_17 = 8580949348896262817LL;
int zero = 0;
unsigned short var_18 = (unsigned short)62469;
signed char var_19 = (signed char)-86;
unsigned int var_20 = 1369143927U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
