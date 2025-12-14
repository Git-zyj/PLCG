#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8369761045648803610LL;
long long int var_4 = 7902424223612559991LL;
unsigned char var_7 = (unsigned char)230;
long long int var_10 = -8770219266442227243LL;
unsigned long long int var_12 = 5000051818814712328ULL;
int zero = 0;
short var_19 = (short)-16820;
int var_20 = 1500093605;
signed char var_21 = (signed char)-55;
long long int var_22 = 500529537817808463LL;
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
