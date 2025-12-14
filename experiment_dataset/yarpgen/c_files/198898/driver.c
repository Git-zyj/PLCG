#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -53028692;
long long int var_2 = -7265369857543446516LL;
signed char var_6 = (signed char)5;
long long int var_7 = -4106461411629556954LL;
int var_8 = -350331691;
signed char var_15 = (signed char)-107;
long long int var_18 = 637364075262444779LL;
unsigned char var_19 = (unsigned char)59;
int zero = 0;
signed char var_20 = (signed char)-63;
int var_21 = -7093996;
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
