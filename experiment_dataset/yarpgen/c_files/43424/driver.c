#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
long long int var_1 = -5692935292654870558LL;
int var_2 = -1845169714;
unsigned int var_4 = 1668381197U;
long long int var_7 = 984193933557465348LL;
short var_8 = (short)-25024;
unsigned short var_9 = (unsigned short)49026;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)93;
short var_12 = (short)-12150;
int var_13 = -55480200;
long long int var_14 = 4190222006309346578LL;
unsigned long long int var_15 = 12488711690859242301ULL;
unsigned short var_16 = (unsigned short)8985;
int zero = 0;
unsigned char var_17 = (unsigned char)98;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)59288;
unsigned long long int var_20 = 10944801895678729315ULL;
short var_21 = (short)5647;
short var_22 = (short)-24151;
signed char var_23 = (signed char)-67;
long long int var_24 = -2156645930213809622LL;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 4416028877256825050ULL;
unsigned short var_28 = (unsigned short)11880;
unsigned char var_29 = (unsigned char)95;
int var_30 = 742789629;
short var_31 = (short)29667;
long long int var_32 = 3349264368983571849LL;
int var_33 = -1648285425;
unsigned short var_34 = (unsigned short)9456;
long long int var_35 = 1188392987798482261LL;
_Bool var_36 = (_Bool)0;
short var_37 = (short)-17511;
unsigned int var_38 = 1911184435U;
short var_39 = (short)12113;
signed char var_40 = (signed char)-68;
unsigned short var_41 = (unsigned short)39703;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
