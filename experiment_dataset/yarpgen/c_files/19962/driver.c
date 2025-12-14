#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 284594115716188655ULL;
long long int var_2 = -3721501253259549932LL;
unsigned short var_4 = (unsigned short)19995;
unsigned int var_7 = 2276490872U;
long long int var_8 = -6666767868316541563LL;
unsigned long long int var_9 = 13663385109576496878ULL;
unsigned long long int var_12 = 6981476494619854392ULL;
long long int var_13 = 1960180184949899863LL;
unsigned char var_19 = (unsigned char)78;
int zero = 0;
unsigned long long int var_20 = 6163803045153449735ULL;
int var_21 = 511887771;
unsigned long long int var_22 = 9297012674697190244ULL;
unsigned long long int var_23 = 6330529621659299171ULL;
long long int var_24 = -7853974622773285682LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
