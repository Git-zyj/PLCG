/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196701
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (((((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-109))))) ? (var_0) : (((/* implicit */unsigned long long int) var_6))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (915327208U)))), (((unsigned char) ((arr_0 [i_0]) | (arr_0 [i_0]))))));
        var_18 += ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60))) - (13835058055282163712ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) var_3);
        arr_5 [(short)3] = max((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((var_8) <= (((/* implicit */int) arr_2 [i_0]))))))), (((/* implicit */int) (short)0)));
    }
    for (unsigned int i_1 = 3; i_1 < 12; i_1 += 2) 
    {
        var_19 = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_7 [i_1 - 3])))), (((((/* implicit */_Bool) (short)22023)) ? (((/* implicit */int) (short)-5733)) : (((/* implicit */int) (short)-25567))))));
        var_20 += ((/* implicit */_Bool) (~(min((((/* implicit */int) (short)18531)), ((-2147483647 - 1))))));
        var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)124)), (arr_0 [i_1])));
        var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max(((unsigned short)31954), (((/* implicit */unsigned short) arr_7 [i_1 - 2]))))), (((((/* implicit */_Bool) arr_7 [i_1 - 2])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 - 2])))))));
    }
    for (unsigned char i_2 = 3; i_2 < 13; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) (_Bool)1);
        arr_11 [i_2 - 2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-27550)), (var_0)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)181)))) : (max((arr_0 [i_2]), (((/* implicit */int) (_Bool)1))))))) || ((!(arr_8 [i_2 - 1])))));
    }
    for (long long int i_3 = 3; i_3 < 23; i_3 += 2) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned long long int) min(((short)-32750), ((short)32750)));
        var_23 = ((/* implicit */long long int) max((((unsigned int) (short)-20884)), (min((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) 8388600LL)) ? (var_6) : (var_2)))))));
        var_24 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)131)) | (((/* implicit */int) var_16))));
    }
}
