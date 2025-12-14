#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13943885794811672423ULL;
unsigned long long int var_5 = 17201172331358269652ULL;
unsigned int var_7 = 2360928738U;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 3845662744U;
signed char var_13 = (signed char)-55;
unsigned short var_14 = (unsigned short)561;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
