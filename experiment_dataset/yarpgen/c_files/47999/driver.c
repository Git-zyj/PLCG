#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1844010245692464041ULL;
long long int var_1 = -2771068806947011417LL;
signed char var_7 = (signed char)-15;
long long int var_10 = 3411937673264093689LL;
long long int var_13 = -597095675606483831LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 1327794864U;
int var_19 = 1197105658;
unsigned int var_20 = 2841149260U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
