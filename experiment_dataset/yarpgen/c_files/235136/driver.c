#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 825800604325458396LL;
long long int var_3 = -4301632673809439838LL;
int var_5 = -1373644109;
int var_7 = 790851226;
short var_8 = (short)8099;
signed char var_12 = (signed char)-93;
int zero = 0;
unsigned long long int var_13 = 15182020086523211297ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
