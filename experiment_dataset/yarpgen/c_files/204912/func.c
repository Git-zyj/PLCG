/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204912
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */int) (short)16697)) - (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16697)) ? (2147483644) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) 467029239)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_3 [i_1] [i_2])))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [6U])) ? (-1639757342) : (((/* implicit */int) var_3))))))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_8))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (signed char)88))));
    var_19 &= ((/* implicit */_Bool) min((min((((/* implicit */long long int) min((((/* implicit */short) var_7)), (var_11)))), (4296929448913350868LL))), (((/* implicit */long long int) ((unsigned int) -1639757342)))));
    var_20 = ((/* implicit */long long int) max((((/* implicit */int) var_13)), (-2147483647)));
}
