#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52632;
unsigned long long int var_6 = 6133774571235096032ULL;
signed char var_7 = (signed char)-74;
long long int var_10 = 2659694868414843781LL;
unsigned short var_11 = (unsigned short)33955;
int zero = 0;
long long int var_12 = 5528626369995806554LL;
unsigned int var_13 = 6681553U;
void init() {
}

void checksum() {
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
