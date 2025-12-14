#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2622535633078966305LL;
long long int var_5 = 3259491716142433986LL;
long long int var_9 = -1922751282111305043LL;
long long int var_11 = 3627484376332576979LL;
long long int var_14 = 2877461875102071658LL;
long long int var_15 = 1111286790221129285LL;
int zero = 0;
long long int var_16 = -2536320732157118281LL;
long long int var_17 = -290059394142106145LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
