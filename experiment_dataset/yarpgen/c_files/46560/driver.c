#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3354211573482345079ULL;
int var_1 = 1364435117;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-23650;
long long int var_6 = -8057212014015386396LL;
unsigned long long int var_7 = 13871148582852175257ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 13424204624677881319ULL;
signed char var_11 = (signed char)-120;
signed char var_12 = (signed char)-35;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
