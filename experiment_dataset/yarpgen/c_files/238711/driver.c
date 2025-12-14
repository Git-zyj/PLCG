#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1161830790U;
unsigned short var_1 = (unsigned short)855;
unsigned long long int var_2 = 14832368123235898010ULL;
unsigned long long int var_3 = 3113112540048902380ULL;
int var_4 = -987712241;
int var_6 = -698075606;
unsigned short var_8 = (unsigned short)28715;
unsigned long long int var_9 = 14145983563471276977ULL;
long long int var_10 = 6120665907119288987LL;
int zero = 0;
unsigned short var_11 = (unsigned short)43572;
unsigned int var_12 = 4245547827U;
unsigned long long int var_13 = 7636435803100770148ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
