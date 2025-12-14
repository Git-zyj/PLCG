#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1062543319;
unsigned long long int var_9 = 3054320072734491240ULL;
int zero = 0;
int var_19 = -1616632025;
long long int var_20 = -5879835723367168357LL;
int var_21 = -918617370;
short var_22 = (short)17481;
unsigned long long int var_23 = 15437443407073363858ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
