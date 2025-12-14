#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3193663155168211861LL;
signed char var_4 = (signed char)49;
unsigned short var_7 = (unsigned short)58146;
signed char var_8 = (signed char)-45;
int zero = 0;
unsigned short var_10 = (unsigned short)29757;
signed char var_11 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
