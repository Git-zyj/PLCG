#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1089226586081685385ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 10089488090391247320ULL;
unsigned char var_8 = (unsigned char)230;
unsigned long long int var_9 = 8598055335245136717ULL;
signed char var_11 = (signed char)-19;
int zero = 0;
int var_12 = 1382061156;
int var_13 = -2146417865;
void init() {
}

void checksum() {
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
