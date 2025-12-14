#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27799;
short var_2 = (short)-697;
short var_4 = (short)22062;
unsigned short var_5 = (unsigned short)40499;
_Bool var_9 = (_Bool)0;
int var_10 = 1049860845;
int zero = 0;
unsigned char var_11 = (unsigned char)228;
short var_12 = (short)25816;
short var_13 = (short)-20349;
unsigned char var_14 = (unsigned char)115;
long long int var_15 = 2005153712688465836LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
