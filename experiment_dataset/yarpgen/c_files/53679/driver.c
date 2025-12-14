#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)-43;
unsigned long long int var_13 = 2348041381822816032ULL;
unsigned long long int var_14 = 1455465063628533534ULL;
unsigned long long int var_17 = 14676639768185249459ULL;
unsigned long long int var_19 = 721180069872080176ULL;
int zero = 0;
signed char var_20 = (signed char)-25;
unsigned long long int var_21 = 17584238207519723907ULL;
signed char var_22 = (signed char)-88;
unsigned long long int var_23 = 3277101674067921218ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
