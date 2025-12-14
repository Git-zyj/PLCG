/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224245
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_15 = ((/* implicit */unsigned long long int) (~(((long long int) -3674549339370457539LL))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */long long int) var_9)) % (3674549339370457538LL))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 3; i_2 < 18; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) arr_3 [i_1]);
            var_18 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_2]))) : (3674549339370457539LL))));
        }
    }
    for (unsigned int i_3 = 3; i_3 < 9; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_3 + 3] [i_3 + 3])) : ((-(-439998387)))))));
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)50162)))))));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (var_1)));
        }
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_10 [i_3] [(short)4])) ? (((/* implicit */int) arr_4 [18ULL])) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_13)) ? (-439998387) : (arr_6 [6ULL])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [2] [i_3 + 4] [i_3 + 4])))))) ? (((((/* implicit */_Bool) 350053150996495025ULL)) ? (((/* implicit */int) arr_4 [(unsigned short)18])) : (((/* implicit */int) (unsigned short)50162)))) : ((~(((/* implicit */int) (short)7302))))))) : (((2147483392LL) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3 + 4])))))));
    }
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        var_23 = ((/* implicit */_Bool) max((var_23), (arr_4 [i_5])));
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_19 [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) arr_12 [i_5]);
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_18 [i_5] [i_6 + 1] [i_5])), (var_11))))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) var_13))));
                    var_26 = ((/* implicit */unsigned short) ((short) 15825427111111570660ULL));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6] [i_6 + 3])) ? (arr_3 [i_6]) : (var_4)))) ? (((/* implicit */int) arr_17 [i_6 + 2] [i_6 + 1] [i_6 + 1])) : (((((/* implicit */int) arr_15 [i_6] [18U] [i_6])) ^ (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((-(439998398))) : (((/* implicit */int) (_Bool)0))))) : ((+(((((/* implicit */_Bool) arr_6 [i_6])) ? (arr_14 [i_6] [6U]) : (((/* implicit */unsigned long long int) var_9))))))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */long long int) max(((-(var_1))), (((unsigned long long int) var_0))));
    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) max((var_4), (((/* implicit */unsigned long long int) var_10)))))));
}
