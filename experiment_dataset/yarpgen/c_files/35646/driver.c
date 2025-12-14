#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1317914259;
int var_1 = 266946476;
unsigned long long int var_4 = 4934899481586453726ULL;
long long int var_5 = 7261604939367718197LL;
unsigned long long int var_7 = 12623375774738664749ULL;
unsigned short var_8 = (unsigned short)57806;
int zero = 0;
signed char var_10 = (signed char)-9;
int var_11 = -438038775;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
