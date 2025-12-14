#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 266839479;
short var_5 = (short)-2817;
unsigned short var_8 = (unsigned short)53442;
long long int var_10 = 4345177196118311319LL;
unsigned int var_14 = 4274866788U;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_19 = 6705617009801449353LL;
unsigned long long int var_20 = 11774745583511578421ULL;
unsigned int var_21 = 4293483984U;
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
