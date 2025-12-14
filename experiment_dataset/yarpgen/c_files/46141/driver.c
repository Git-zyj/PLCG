#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11577521794753497342ULL;
_Bool var_2 = (_Bool)0;
long long int var_3 = 5165912627012799129LL;
long long int var_7 = 7782031217376073055LL;
signed char var_8 = (signed char)38;
long long int var_9 = 7621415019487177808LL;
int zero = 0;
long long int var_11 = -3391892500798436289LL;
long long int var_12 = 8971158619499229979LL;
long long int var_13 = -8519768218307690688LL;
unsigned long long int var_14 = 17413253070766207232ULL;
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
