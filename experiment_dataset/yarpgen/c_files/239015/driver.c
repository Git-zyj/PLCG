#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11887600801607000124ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 16900210560444221649ULL;
unsigned char var_10 = (unsigned char)154;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 12084990829128372131ULL;
short var_14 = (short)22305;
unsigned long long int var_18 = 752946552368289990ULL;
short var_19 = (short)-28651;
int zero = 0;
signed char var_20 = (signed char)111;
unsigned long long int var_21 = 9199325109448221037ULL;
long long int var_22 = 5554084293549741699LL;
unsigned long long int var_23 = 16547702060368216095ULL;
unsigned int var_24 = 1058947474U;
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
