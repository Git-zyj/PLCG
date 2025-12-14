#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)65;
short var_2 = (short)26591;
int var_4 = 277679799;
unsigned char var_5 = (unsigned char)53;
int zero = 0;
signed char var_12 = (signed char)-118;
long long int var_13 = 2223509285233197666LL;
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
