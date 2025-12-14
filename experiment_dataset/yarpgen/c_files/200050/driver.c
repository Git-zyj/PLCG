#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4153041259087326007LL;
long long int var_3 = -8334576028947798083LL;
signed char var_6 = (signed char)-57;
long long int var_8 = 8648664272774292206LL;
int var_9 = 1178494210;
int zero = 0;
signed char var_10 = (signed char)-5;
long long int var_11 = -8488994808112781163LL;
int var_12 = 1669045962;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
