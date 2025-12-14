#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-30729;
long long int var_6 = -6055497634527835024LL;
long long int var_7 = 6006193303750395466LL;
short var_12 = (short)30579;
int var_17 = 934346200;
long long int var_18 = -6433078804422169550LL;
int zero = 0;
long long int var_19 = -7429028608040319661LL;
int var_20 = -705001400;
short var_21 = (short)-26904;
void init() {
}

void checksum() {
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
