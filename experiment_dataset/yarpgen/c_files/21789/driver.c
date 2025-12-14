#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6284733344191159766LL;
int var_1 = -300253657;
unsigned short var_7 = (unsigned short)10801;
unsigned char var_8 = (unsigned char)195;
signed char var_10 = (signed char)-74;
signed char var_12 = (signed char)68;
int var_14 = -66105086;
long long int var_15 = -903056534602334855LL;
short var_16 = (short)16065;
int zero = 0;
int var_19 = -1826180084;
unsigned long long int var_20 = 9510743608318544109ULL;
unsigned long long int var_21 = 11905619303283980795ULL;
unsigned char var_22 = (unsigned char)153;
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
