#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18242;
_Bool var_1 = (_Bool)0;
int var_3 = -2116268714;
unsigned int var_4 = 2346944382U;
short var_6 = (short)148;
short var_11 = (short)10582;
unsigned long long int var_14 = 7788170971189207139ULL;
long long int var_15 = -332956047638479977LL;
long long int var_18 = -7300777498303381920LL;
int zero = 0;
signed char var_20 = (signed char)-57;
unsigned long long int var_21 = 6409004075120596003ULL;
signed char var_22 = (signed char)86;
unsigned char var_23 = (unsigned char)6;
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
