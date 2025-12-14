/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49239
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) ((unsigned short) -7215166126420884165LL)))) | (var_6)));
    var_13 &= ((/* implicit */unsigned short) (-(((unsigned long long int) var_0))));
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((min((((unsigned long long int) var_8)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8))))) << (((/* implicit */int) ((((unsigned long long int) var_3)) < (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (var_5)))))))))));
    var_15 = ((/* implicit */unsigned int) (unsigned short)1);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_16 *= ((unsigned short) (-(((/* implicit */int) arr_0 [i_0 + 1]))));
        arr_4 [(signed char)22] [i_0 + 1] = ((/* implicit */short) min((max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) 7215166126420884165LL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0 - 1])), (arr_3 [i_0])))) ? (((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1])))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_1] [i_1])) > (((/* implicit */int) arr_5 [i_1] [(signed char)8]))))), (arr_2 [i_1])))), (((long long int) min((arr_2 [i_1]), (arr_7 [i_1] [i_1]))))));
        arr_10 [i_1] = ((/* implicit */short) arr_7 [i_1] [(unsigned short)5]);
        var_17 = ((/* implicit */long long int) min((var_17), (var_10)));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) arr_15 [i_3] [i_2] [i_2])))));
                    var_19 = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_2])) + (2147483647))) << (((((unsigned int) arr_5 [i_1] [i_1])) - (4294967295U)))));
                }
            } 
        } 
        arr_17 [i_1] = max((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [i_1] [i_1]), (arr_11 [i_1] [i_1]))))) : (3606575788305466811ULL))));
    }
    for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) var_0);
        arr_20 [i_4 + 3] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) 7215166126420884165LL))), (var_4)))) ? ((~(262080ULL))) : (((unsigned long long int) ((signed char) var_2))));
        arr_21 [i_4] &= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_4 + 2])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)38861))))) : ((~(var_6))))));
    }
}
