#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6606142608580329702LL;
unsigned long long int var_1 = 7288905274669579139ULL;
unsigned long long int var_5 = 5731457126986464161ULL;
int var_7 = 1346296290;
long long int var_9 = 2274907888719881971LL;
int var_10 = -2141397976;
unsigned char var_12 = (unsigned char)56;
int zero = 0;
int var_13 = 542281356;
int var_14 = -1185293170;
unsigned char var_15 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
