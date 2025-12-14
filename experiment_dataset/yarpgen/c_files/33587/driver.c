#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8625792165108320721ULL;
_Bool var_7 = (_Bool)1;
int var_9 = -1256855156;
unsigned short var_10 = (unsigned short)25741;
int zero = 0;
signed char var_12 = (signed char)-71;
signed char var_13 = (signed char)-54;
unsigned short var_14 = (unsigned short)25663;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
