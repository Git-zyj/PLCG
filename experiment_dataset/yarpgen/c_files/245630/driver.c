#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1642875069;
unsigned long long int var_8 = 13571900301382958111ULL;
signed char var_9 = (signed char)-45;
unsigned long long int var_11 = 6664400585480458313ULL;
unsigned int var_16 = 1626785698U;
long long int var_17 = -606049335702443015LL;
int zero = 0;
unsigned long long int var_19 = 12421671730017752384ULL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-109;
signed char var_22 = (signed char)-29;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
