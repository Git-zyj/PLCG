#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)115;
unsigned short var_6 = (unsigned short)55750;
long long int var_13 = -6037060267030794122LL;
unsigned short var_17 = (unsigned short)25716;
int zero = 0;
unsigned long long int var_18 = 986541917094829537ULL;
unsigned char var_19 = (unsigned char)123;
unsigned int var_20 = 3359793435U;
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
