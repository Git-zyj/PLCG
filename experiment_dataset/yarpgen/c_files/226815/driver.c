#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1879;
signed char var_7 = (signed char)-120;
unsigned short var_8 = (unsigned short)55940;
signed char var_9 = (signed char)102;
long long int var_10 = 2508972422572303462LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_14 = 11359855999254703827ULL;
int zero = 0;
long long int var_17 = 4707892798614372205LL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)215;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
