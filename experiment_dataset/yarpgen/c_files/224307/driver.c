#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3041182064267481878LL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-34;
unsigned long long int var_11 = 12988042476858845676ULL;
int zero = 0;
int var_12 = 1451980926;
unsigned long long int var_13 = 1208625433473931194ULL;
int var_14 = 1957151601;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
