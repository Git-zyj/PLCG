#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16573200306294447258ULL;
int var_2 = -1360343089;
signed char var_3 = (signed char)-40;
unsigned int var_4 = 1047127292U;
signed char var_5 = (signed char)87;
unsigned char var_6 = (unsigned char)196;
long long int var_7 = 5642927288551894268LL;
long long int var_8 = -1339416918308672322LL;
signed char var_9 = (signed char)-51;
int zero = 0;
short var_10 = (short)29737;
unsigned long long int var_11 = 9510180486462556773ULL;
long long int var_12 = 5732195947623004840LL;
unsigned int var_13 = 3387952240U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
