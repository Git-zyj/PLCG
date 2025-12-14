#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2730687528465589214LL;
long long int var_1 = 5360899840134765354LL;
int var_4 = -163502686;
int zero = 0;
short var_18 = (short)19594;
int var_19 = 1192043470;
unsigned long long int var_20 = 12287319342622307983ULL;
signed char var_21 = (signed char)14;
long long int var_22 = 4550840580532678459LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
