#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_17 = 4959717481405144035LL;
short var_18 = (short)-27784;
_Bool var_19 = (_Bool)0;
int var_20 = 286827532;
unsigned char var_21 = (unsigned char)208;
int var_22 = 1142978238;
int var_23 = -780071648;
short var_24 = (short)23698;
short var_25 = (short)10417;
_Bool var_26 = (_Bool)0;
_Bool var_27 = (_Bool)0;
int var_28 = -1359211801;
unsigned long long int var_29 = 18162486671403179146ULL;
unsigned char var_30 = (unsigned char)227;
unsigned long long int var_31 = 11012154484649283360ULL;
unsigned long long int var_32 = 2217360579609106684ULL;
int var_33 = 1776401095;
unsigned long long int var_34 = 9417526874246597116ULL;
long long int var_35 = -2630903906133906207LL;
int var_36 = -1494453615;
_Bool var_37 = (_Bool)1;
long long int var_38 = -218786419256485362LL;
unsigned char var_39 = (unsigned char)186;
int var_40 = -1170619670;
unsigned char var_41 = (unsigned char)42;
_Bool var_42 = (_Bool)1;
unsigned char var_43 = (unsigned char)63;
_Bool var_44 = (_Bool)1;
unsigned char var_45 = (unsigned char)57;
_Bool var_46 = (_Bool)0;
unsigned short var_47 = (unsigned short)26028;
int var_48 = -298144621;
unsigned long long int var_49 = 13873932721640779127ULL;
_Bool var_50 = (_Bool)0;
unsigned short var_51 = (unsigned short)22319;
unsigned short var_52 = (unsigned short)41110;
unsigned long long int var_53 = 8405240890800875449ULL;
long long int var_54 = -3325415354569639336LL;
long long int var_55 = -5925524348478174006LL;
int var_56 = 861551278;
_Bool var_57 = (_Bool)0;
int var_58 = -1641491662;
unsigned int var_59 = 3528447007U;
int var_60 = -1044002384;
int var_61 = -1530607510;
short var_62 = (short)-23552;
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
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
