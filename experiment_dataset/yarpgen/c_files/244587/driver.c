#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)180;
_Bool var_3 = (_Bool)0;
unsigned short var_7 = (unsigned short)46839;
int var_8 = 864857865;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)40;
long long int var_11 = 7165426875794178851LL;
unsigned long long int var_12 = 2854090425792580226ULL;
unsigned long long int var_13 = 11137754580092243960ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
