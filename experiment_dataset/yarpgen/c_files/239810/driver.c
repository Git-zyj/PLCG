#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -460811169729439792LL;
long long int var_9 = 6456391828133359959LL;
long long int var_10 = -7473982605190507700LL;
long long int var_15 = -7595489329685850937LL;
long long int var_19 = -1071911067599327472LL;
int zero = 0;
long long int var_20 = -8425634306403387241LL;
long long int var_21 = -2813219635361238356LL;
void init() {
}

void checksum() {
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
