#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
signed char var_1 = (signed char)81;
int var_3 = -84047781;
int var_8 = 354984019;
int var_12 = -1206375880;
int zero = 0;
unsigned short var_13 = (unsigned short)14148;
int var_14 = 378381022;
int var_15 = 1965487878;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
