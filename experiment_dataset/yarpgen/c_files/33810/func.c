/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33810
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : ((((!(((/* implicit */_Bool) var_2)))) ? (max((-2117222054), (((/* implicit */int) var_9)))) : (((var_5) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_17 = (_Bool)1;
                    var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (2147483647)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) ((_Bool) var_0)))));
                    arr_6 [(_Bool)1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_0 [i_2])), (max((arr_3 [i_2 + 2] [i_2 - 1] [i_2 + 2]), (((/* implicit */int) arr_0 [i_1]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) 2147483647);
}
