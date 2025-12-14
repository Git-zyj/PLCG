#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1887654072;
long long int var_4 = -8566894600660994049LL;
long long int var_8 = 1626254018789745395LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 6583617928051108098ULL;
unsigned char var_15 = (unsigned char)130;
unsigned long long int var_16 = 6659448101581933914ULL;
void init() {
}

void checksum() {
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
