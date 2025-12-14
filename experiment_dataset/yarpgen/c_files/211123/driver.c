#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2303935829356192610ULL;
int var_4 = 687645533;
unsigned long long int var_5 = 12697832243071912787ULL;
unsigned char var_7 = (unsigned char)193;
int zero = 0;
long long int var_12 = -430999642930252205LL;
short var_13 = (short)18179;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
