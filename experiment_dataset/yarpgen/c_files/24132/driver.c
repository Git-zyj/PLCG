#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5155013214299543971ULL;
int var_6 = 1221147996;
unsigned long long int var_14 = 7244669200366717791ULL;
unsigned long long int var_18 = 1019856678362462073ULL;
int var_19 = -1073116450;
int zero = 0;
signed char var_20 = (signed char)-90;
long long int var_21 = -3286863111239370416LL;
unsigned int var_22 = 1301454859U;
unsigned short var_23 = (unsigned short)19130;
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
