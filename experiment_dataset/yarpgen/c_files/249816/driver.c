#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3652789684230091853ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 1014596437989093703ULL;
unsigned char var_15 = (unsigned char)127;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)105;
unsigned short var_19 = (unsigned short)32463;
unsigned char var_20 = (unsigned char)167;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
