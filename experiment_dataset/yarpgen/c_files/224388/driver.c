#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
unsigned short var_1 = (unsigned short)10961;
int var_2 = 2090673653;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 1254965198U;
signed char var_11 = (signed char)40;
unsigned long long int var_12 = 2142339089981430047ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
