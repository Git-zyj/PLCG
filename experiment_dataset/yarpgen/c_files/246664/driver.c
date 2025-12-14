#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7720783845839695875LL;
unsigned int var_1 = 128302532U;
unsigned int var_2 = 1608042640U;
unsigned long long int var_3 = 15086858438092464498ULL;
unsigned int var_4 = 382892295U;
unsigned long long int var_5 = 778915394585230861ULL;
unsigned long long int var_6 = 4329541338372857943ULL;
signed char var_7 = (signed char)49;
unsigned long long int var_9 = 8015206779456647730ULL;
int var_10 = 1691830126;
int zero = 0;
unsigned short var_11 = (unsigned short)64290;
unsigned long long int var_12 = 10016214913156855468ULL;
void init() {
}

void checksum() {
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
