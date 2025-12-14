#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 248230675;
unsigned char var_3 = (unsigned char)120;
unsigned char var_6 = (unsigned char)219;
int var_9 = 1343445159;
_Bool var_10 = (_Bool)1;
unsigned long long int var_13 = 12547248961196519302ULL;
short var_14 = (short)20513;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)25050;
long long int var_19 = 883513475939145578LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
