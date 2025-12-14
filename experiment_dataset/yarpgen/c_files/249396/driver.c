#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -1134654779958723206LL;
unsigned int var_9 = 3474918200U;
_Bool var_11 = (_Bool)1;
signed char var_16 = (signed char)121;
int zero = 0;
signed char var_17 = (signed char)-76;
short var_18 = (short)-22632;
short var_19 = (short)-26660;
long long int var_20 = 2857712779266656629LL;
unsigned long long int var_21 = 3336029587393589685ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
