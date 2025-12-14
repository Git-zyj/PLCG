#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-12;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)1254;
signed char var_7 = (signed char)105;
unsigned long long int var_16 = 12729965910591798583ULL;
int zero = 0;
int var_18 = 232985649;
unsigned long long int var_19 = 5979906400446127356ULL;
void init() {
}

void checksum() {
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
