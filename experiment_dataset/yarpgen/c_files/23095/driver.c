#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6817771923776006922LL;
unsigned int var_3 = 1049215578U;
long long int var_7 = 62299119248539557LL;
signed char var_11 = (signed char)93;
long long int var_17 = 322757370575660942LL;
int zero = 0;
unsigned long long int var_18 = 7926618293821283776ULL;
short var_19 = (short)29548;
long long int var_20 = 3178668596227993810LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
