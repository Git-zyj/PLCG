/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2163
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [4U] = ((/* implicit */unsigned short) var_7);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
            arr_7 [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [i_1]);
        }
        var_13 = 1796657729U;
    }
    for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_9 [i_2] [i_2 - 1])), (1796657729U)))) ? (((((/* implicit */unsigned long long int) var_11)) ^ (arr_10 [i_2] [i_2]))) : (((((/* implicit */_Bool) 1796657715U)) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) (~(2498309567U))))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) min((2498309594U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1796657717U)) || (((/* implicit */_Bool) var_11))))))))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((max((2498309567U), (1796657729U))) % (2498309554U))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(2498309578U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1796657729U)));
    }
    var_18 ^= ((var_10) & (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (2498309586U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_3))));
}
