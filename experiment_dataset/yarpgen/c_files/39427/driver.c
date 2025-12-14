#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -870573106562228879LL;
long long int var_9 = -6310302879176727844LL;
long long int var_13 = -1000316292443787816LL;
int zero = 0;
long long int var_17 = -3698142098000166036LL;
long long int var_18 = 2614738900405248537LL;
long long int var_19 = 1855306034955757358LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
