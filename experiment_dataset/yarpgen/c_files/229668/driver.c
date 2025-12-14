#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)104;
unsigned long long int var_3 = 5414604270985551810ULL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1122530816U;
unsigned char var_12 = (unsigned char)249;
unsigned short var_13 = (unsigned short)26775;
int zero = 0;
unsigned short var_17 = (unsigned short)54290;
unsigned long long int var_18 = 895564707553178702ULL;
unsigned int var_19 = 4220771103U;
unsigned char var_20 = (unsigned char)7;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
