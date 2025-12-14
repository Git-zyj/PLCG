/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234602
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
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (signed char)-1)))))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967281U)))))) ^ (((((/* implicit */_Bool) (short)-14804)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (25U)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1 - 1] = ((/* implicit */_Bool) ((((((/* implicit */int) max((var_3), (((/* implicit */short) (unsigned char)68))))) - ((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_0] [(_Bool)0] [i_0])))))) | (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-81))))))))));
                arr_5 [i_0] [i_1 - 2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)9])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-6))))) : (((((((/* implicit */int) (short)0)) >= (((/* implicit */int) (signed char)-119)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (var_5)))));
            }
        } 
    } 
}
