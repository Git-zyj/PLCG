#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18086688675842846535ULL;
short var_2 = (short)12470;
int var_4 = -1034516220;
signed char var_8 = (signed char)-114;
long long int var_10 = -7650313675110895422LL;
int zero = 0;
unsigned int var_19 = 1172455963U;
signed char var_20 = (signed char)-10;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-116;
void init() {
}

void checksum() {
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
