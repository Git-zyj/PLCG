#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)24;
unsigned long long int var_11 = 16440809212118581806ULL;
unsigned long long int var_12 = 11269059035318945682ULL;
signed char var_14 = (signed char)-102;
unsigned long long int var_15 = 3360048463300883979ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_19 = 12928808162645016881ULL;
int zero = 0;
unsigned long long int var_20 = 10261394448747579192ULL;
unsigned long long int var_21 = 6993371402802700651ULL;
void init() {
}

void checksum() {
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
