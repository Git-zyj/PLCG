/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49520
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
    var_15 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (var_4)));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 805306368U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))), ((~(var_11)))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) -7678970513248922578LL)) ? (4026531840U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) / (var_3))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 651727555U))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) var_8);
                var_18 = ((/* implicit */signed char) arr_3 [i_0 - 1]);
                arr_5 [i_0] = ((/* implicit */unsigned short) ((var_6) & (((/* implicit */unsigned long long int) arr_2 [i_0]))));
            }
        } 
    } 
}
