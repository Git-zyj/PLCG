#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -789979712907355054LL;
short var_11 = (short)-21814;
unsigned short var_15 = (unsigned short)5307;
int var_16 = 703509674;
int zero = 0;
unsigned int var_19 = 233741530U;
unsigned long long int var_20 = 8677502192815964492ULL;
signed char var_21 = (signed char)-52;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
