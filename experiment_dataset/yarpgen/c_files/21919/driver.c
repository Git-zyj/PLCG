#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)208;
long long int var_2 = -6817363444766582355LL;
long long int var_8 = -6065340679704026984LL;
int zero = 0;
long long int var_13 = 6254762938332953286LL;
long long int var_14 = 1301301467554352505LL;
unsigned short var_15 = (unsigned short)31762;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
