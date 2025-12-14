#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)235;
short var_7 = (short)9431;
unsigned long long int var_8 = 2088872227035040835ULL;
int var_9 = 1883606387;
unsigned long long int var_11 = 4582064200155643851ULL;
unsigned long long int var_13 = 12902213339423694472ULL;
int var_15 = 46165059;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 15023830470071227281ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
