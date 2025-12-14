#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1989586581;
unsigned short var_8 = (unsigned short)36047;
unsigned long long int var_9 = 17574284245569675677ULL;
int zero = 0;
signed char var_10 = (signed char)119;
unsigned long long int var_11 = 16572833474183329335ULL;
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
