#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 340981002U;
short var_5 = (short)2583;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 13362968592981098589ULL;
unsigned short var_9 = (unsigned short)38869;
int zero = 0;
long long int var_10 = 7521178355632079480LL;
long long int var_11 = 7556296246433049705LL;
unsigned char var_12 = (unsigned char)244;
signed char var_13 = (signed char)-54;
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
