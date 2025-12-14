#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 745785749U;
signed char var_8 = (signed char)122;
unsigned long long int var_9 = 6076644133353104465ULL;
unsigned long long int var_11 = 11888517375517540522ULL;
int var_12 = -890196218;
signed char var_13 = (signed char)114;
int zero = 0;
int var_17 = -1171338300;
long long int var_18 = -9042024022093946070LL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
