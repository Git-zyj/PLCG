#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)9964;
unsigned long long int var_9 = 854297936339724770ULL;
short var_10 = (short)-23744;
unsigned long long int var_18 = 8418169371055772185ULL;
int zero = 0;
unsigned long long int var_19 = 13277165104553309678ULL;
signed char var_20 = (signed char)-74;
unsigned long long int var_21 = 7907571719224098542ULL;
long long int var_22 = -6158077710559300902LL;
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
