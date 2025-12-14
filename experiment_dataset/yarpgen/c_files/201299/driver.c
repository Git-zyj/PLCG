#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5973174975327943699LL;
unsigned int var_4 = 2281118561U;
signed char var_6 = (signed char)-109;
long long int var_8 = 9199260976132715832LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)87;
short var_11 = (short)-3699;
short var_12 = (short)6902;
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
