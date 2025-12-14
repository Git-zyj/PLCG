#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4142094434931659246ULL;
signed char var_8 = (signed char)-19;
signed char var_9 = (signed char)-125;
long long int var_10 = 568919816166705655LL;
int var_11 = -1566410245;
int zero = 0;
unsigned short var_14 = (unsigned short)59091;
signed char var_15 = (signed char)-112;
void init() {
}

void checksum() {
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
