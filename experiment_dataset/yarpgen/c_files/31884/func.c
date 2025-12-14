/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31884
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
    var_17 = ((/* implicit */unsigned int) var_13);
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_12) : (var_2)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) min((var_8), (((/* implicit */short) var_14)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */int) (_Bool)1))))) ? ((~(var_6))) : (((/* implicit */unsigned long long int) ((var_14) ? (var_15) : (33822867456LL)))))) : (((/* implicit */unsigned long long int) min((min((var_15), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((unsigned short) var_2))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]);
                    var_19 &= ((/* implicit */unsigned long long int) 1990962141U);
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 3] [i_0 + 2])) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 2] [i_0])) + (21964)))))) ? (((((/* implicit */_Bool) 12259065543345511400ULL)) ? (((/* implicit */int) ((-1059606627) == (1059606626)))) : (((/* implicit */int) arr_7 [i_0 - 1] [(short)14] [i_1])))) : ((+(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
