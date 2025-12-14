/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189755
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [(short)0] [i_0] &= (~(((((/* implicit */_Bool) (unsigned short)47087)) ? (649440317) : (1672796548))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)41474)) + (-649440324))) * (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) (unsigned short)43756)))))));
    }
    for (short i_1 = 4; i_1 < 19; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_1 - 3])) ? (((((/* implicit */_Bool) 1471056131)) ? (8ULL) : (((/* implicit */unsigned long long int) 649440319)))) : (min((((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])), (13698009415951534723ULL))))) == (((/* implicit */unsigned long long int) max((((/* implicit */int) min(((short)22), (((/* implicit */short) (unsigned char)255))))), ((-(var_7))))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) var_4);
    }
    /* LoopSeq 4 */
    for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 - 1]))) : (arr_6 [i_2 - 1])))) ? (((/* implicit */unsigned long long int) 18205102U)) : (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_9)) | (arr_1 [i_2] [i_2 + 2])))), (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        var_19 -= ((/* implicit */short) ((int) max((min((arr_11 [i_2]), (((/* implicit */long long int) (unsigned char)252)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 649440336)) || (((/* implicit */_Bool) -1))))))));
        arr_12 [i_2] |= ((/* implicit */long long int) arr_0 [i_2] [8LL]);
        var_20 -= ((/* implicit */unsigned int) arr_1 [i_2 + 2] [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 14; i_3 += 3) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned short) arr_10 [i_3]);
        var_21 -= ((/* implicit */short) ((int) arr_15 [i_3 + 1]));
        var_22 = ((/* implicit */unsigned int) (-(arr_10 [i_3 - 2])));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 12; i_4 += 2) 
    {
        arr_20 [i_4] = ((/* implicit */int) ((arr_13 [i_4 - 1]) - (arr_13 [i_4 - 1])));
        arr_21 [i_4] [i_4] = (-(((((/* implicit */_Bool) arr_19 [i_4 + 1] [i_4 + 1])) ? (var_2) : (830060446U))));
        var_23 = ((int) arr_2 [i_4 + 2]);
    }
    for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        arr_26 [13] = ((/* implicit */unsigned long long int) arr_25 [i_5] [i_5]);
        var_24 = ((/* implicit */unsigned long long int) (((~((~(var_15))))) > (((unsigned long long int) (+(7502666465828969753ULL))))));
    }
}
