#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16996669346488540324ULL;
unsigned long long int var_4 = 15809683941535210162ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 13177116467660231381ULL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_17 = 13091433379401200265ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)187;
void init() {
}

void checksum() {
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
