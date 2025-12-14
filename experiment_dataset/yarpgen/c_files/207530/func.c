/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207530
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)127)) / (((/* implicit */int) (unsigned char)220))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)220))))) : (536805376U)));
    var_21 = ((/* implicit */unsigned int) 8491428586388579646LL);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned char) arr_1 [i_0]);
        var_22 -= ((/* implicit */unsigned int) (((-(arr_1 [i_0]))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (max((((/* implicit */unsigned long long int) (unsigned char)252)), (arr_1 [i_0])))))));
        var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (signed char)68))))))));
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((8491428586388579647LL), (((/* implicit */long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) : (max((((/* implicit */unsigned int) arr_0 [i_0])), (524287U))))), (4294967275U))))));
        var_25 = ((/* implicit */int) max(((-(3758161920U))), (236522933U)));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 2147483647U)) ? (((unsigned int) 2305561534236983296LL)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [(unsigned char)11]))))) ? ((~(((/* implicit */int) arr_4 [i_1] [i_1])))) : (((/* implicit */int) max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [2ULL])))))))));
        var_27 = ((/* implicit */unsigned int) -1409032911);
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) max(((-((-(arr_1 [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_1]) + (((/* implicit */unsigned long long int) arr_3 [1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)8]))) : (4294967295U)))))))));
        var_29 = ((/* implicit */unsigned char) ((int) ((((/* implicit */unsigned long long int) arr_3 [i_1])) & (arr_1 [i_1]))));
        var_30 = ((/* implicit */unsigned short) (~(3758161919U)));
    }
}
