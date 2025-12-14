#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8682940507683880681LL;
unsigned long long int var_4 = 12709752096164267690ULL;
long long int var_5 = -6496006764157119700LL;
signed char var_8 = (signed char)-51;
short var_9 = (short)19812;
int zero = 0;
unsigned short var_10 = (unsigned short)13097;
long long int var_11 = -2386093879393814267LL;
unsigned int var_12 = 3184027179U;
unsigned char var_13 = (unsigned char)179;
long long int var_14 = -4645985118827867698LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
