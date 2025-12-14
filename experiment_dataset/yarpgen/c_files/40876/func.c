/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40876
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (2665748413877955177LL)))) ? ((((+(2726681338U))) << (((((/* implicit */int) var_6)) - (2805))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_11 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_12 -= ((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1]);
        arr_3 [i_0] [3U] = ((/* implicit */_Bool) var_9);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            arr_9 [i_1] [20U] [i_1] |= ((short) ((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13657)))));
            arr_10 [i_2] = ((short) 2079803747U);
        }
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) 6248162652007814096LL))));
    }
}
