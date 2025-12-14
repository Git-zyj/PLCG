#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2186046805U;
unsigned long long int var_7 = 12342304141884363074ULL;
unsigned long long int var_8 = 453540233165148803ULL;
unsigned long long int var_9 = 15318667782477757615ULL;
long long int var_11 = 2233075380482280019LL;
unsigned int var_12 = 221283599U;
int zero = 0;
unsigned long long int var_14 = 13086645517450276438ULL;
unsigned long long int var_15 = 17938271854284497488ULL;
long long int var_16 = 7217152247479646676LL;
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
