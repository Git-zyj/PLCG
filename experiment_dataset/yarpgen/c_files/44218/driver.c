#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)19;
long long int var_9 = -8563363853071468728LL;
signed char var_10 = (signed char)-57;
short var_11 = (short)-15201;
long long int var_13 = 6400699788217897291LL;
short var_14 = (short)9714;
int zero = 0;
unsigned long long int var_19 = 10894911437306092329ULL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 2599596253876614637ULL;
void init() {
}

void checksum() {
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
