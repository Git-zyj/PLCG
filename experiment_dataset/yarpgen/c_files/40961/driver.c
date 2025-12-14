#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = -1096149436605716861LL;
unsigned short var_5 = (unsigned short)31963;
long long int var_6 = 6092633802030667744LL;
unsigned long long int var_7 = 15757410994285448593ULL;
unsigned long long int var_9 = 4066062779292379810ULL;
int var_14 = 274431155;
unsigned char var_15 = (unsigned char)246;
int zero = 0;
unsigned long long int var_19 = 5664479165322473932ULL;
signed char var_20 = (signed char)-14;
int var_21 = 1140442531;
int var_22 = 1016951666;
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
