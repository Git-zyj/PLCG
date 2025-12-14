#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -354926633;
long long int var_5 = 4045628131619993343LL;
unsigned long long int var_9 = 13614931177442756427ULL;
signed char var_12 = (signed char)107;
int var_17 = 1346337567;
int zero = 0;
signed char var_18 = (signed char)-103;
signed char var_19 = (signed char)-84;
int var_20 = 734261025;
long long int var_21 = 6427816110420345960LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
