#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3556438097652963848LL;
unsigned short var_5 = (unsigned short)47646;
unsigned long long int var_9 = 14863615892303286001ULL;
int zero = 0;
signed char var_10 = (signed char)-91;
unsigned long long int var_11 = 10327277265645003109ULL;
unsigned long long int var_12 = 11242177600429080479ULL;
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
