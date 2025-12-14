#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_8 = (signed char)-44;
signed char var_12 = (signed char)57;
_Bool var_13 = (_Bool)0;
long long int var_15 = -3634709873085467531LL;
int zero = 0;
long long int var_18 = -2249749378404522486LL;
long long int var_19 = 7696085876052334041LL;
unsigned long long int var_20 = 9396244406145319281ULL;
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
