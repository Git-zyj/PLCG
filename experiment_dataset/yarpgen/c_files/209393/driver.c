#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1246523975;
short var_1 = (short)15852;
unsigned long long int var_3 = 1301716859168427734ULL;
unsigned short var_7 = (unsigned short)50307;
_Bool var_8 = (_Bool)1;
signed char var_13 = (signed char)-106;
int zero = 0;
long long int var_18 = -5369473371282990673LL;
unsigned short var_19 = (unsigned short)20473;
void init() {
}

void checksum() {
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
