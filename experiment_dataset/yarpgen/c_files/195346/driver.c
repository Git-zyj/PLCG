#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)21;
unsigned long long int var_4 = 3404664866893812109ULL;
unsigned long long int var_7 = 9134341408834324505ULL;
long long int var_8 = -1453398741239033330LL;
unsigned char var_9 = (unsigned char)106;
long long int var_10 = -1856891866674471883LL;
int zero = 0;
signed char var_11 = (signed char)-96;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
