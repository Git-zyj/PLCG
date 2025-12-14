/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204372
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
    var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_1)) : ((+(((/* implicit */int) var_0)))))), ((-(((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65535))));
                var_13 = arr_4 [(unsigned short)6] [i_0] [i_1 - 2];
                var_14 = arr_1 [i_1];
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0] [i_1 - 1])), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) max((arr_4 [i_0] [i_1] [i_1]), (var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)24232))))))))));
            }
        } 
    } 
}
