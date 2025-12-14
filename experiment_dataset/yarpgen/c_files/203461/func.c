/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203461
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
    var_17 = (-(min((((/* implicit */int) max((((/* implicit */short) var_15)), (var_1)))), (((((/* implicit */int) var_12)) & (((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) min((arr_3 [i_1] [i_0] [(unsigned char)13]), (var_12)))) | (((((/* implicit */int) arr_3 [i_0] [i_1 + 1] [5])) | (((/* implicit */int) (_Bool)1)))))) : (max((((/* implicit */int) max((arr_3 [i_1] [i_1] [i_0]), (var_1)))), ((~(((/* implicit */int) arr_4 [12U]))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(short)0] [i_1] [i_1 + 1])) / (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])), (var_2)))));
                var_19 -= ((/* implicit */int) var_11);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) > ((-(max((var_13), (var_0)))))));
}
