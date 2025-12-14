/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4734
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
    var_20 = ((unsigned short) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */int) (unsigned short)39343)) / (((/* implicit */int) var_4)))) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_0 [i_0]), ((unsigned short)39343)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31258)) ? (((/* implicit */int) (unsigned short)62462)) : (((/* implicit */int) (unsigned short)32764))))) ? (((/* implicit */int) min(((unsigned short)40972), (var_3)))) : (((/* implicit */int) (unsigned short)4)))) : (max(((~(((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)16352)) : (((/* implicit */int) var_6))))))));
                var_22 = var_11;
                var_23 ^= ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))), ((-(((/* implicit */int) (unsigned short)4808))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((((/* implicit */int) var_8)), (max((((((/* implicit */int) (unsigned short)47012)) - (((/* implicit */int) (unsigned short)12288)))), (((/* implicit */int) max((var_15), ((unsigned short)19159))))))));
}
