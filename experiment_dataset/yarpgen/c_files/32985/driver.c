#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16649552948121954127ULL;
int var_3 = 218270850;
unsigned long long int var_5 = 2757411951058673016ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)38926;
unsigned short var_11 = (unsigned short)43920;
signed char var_12 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
