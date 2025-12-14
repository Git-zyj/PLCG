#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1061217815487750391LL;
long long int var_2 = -5686206131484786260LL;
short var_3 = (short)19939;
unsigned long long int var_4 = 13699348337705472772ULL;
unsigned int var_10 = 3606265326U;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)674;
unsigned short var_13 = (unsigned short)32469;
unsigned long long int var_14 = 11224889640811794176ULL;
unsigned int arr_0 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 3743476266U;
}

void checksum() {
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
