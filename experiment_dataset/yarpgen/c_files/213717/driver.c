#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2295570649146308215ULL;
unsigned short var_4 = (unsigned short)23278;
unsigned char var_6 = (unsigned char)212;
int var_10 = 1877322828;
int zero = 0;
long long int var_13 = 1532571018586755121LL;
signed char var_14 = (signed char)-45;
long long int var_15 = -8279513885894070580LL;
int var_16 = 1871258394;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
