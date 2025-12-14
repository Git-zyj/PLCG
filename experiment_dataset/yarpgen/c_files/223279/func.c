/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223279
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
    var_14 = ((/* implicit */unsigned int) min((var_0), (((/* implicit */int) (short)0))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 + 2] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))) : (arr_4 [i_2 - 1] [i_2 + 2] [i_2 + 2]))), (((/* implicit */unsigned int) ((int) arr_5 [i_2 - 1] [i_2 + 2] [i_2 + 2])))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))) + (203565035U))), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_9))))))));
                    arr_8 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1])) < (((/* implicit */int) arr_6 [i_2 + 2] [i_2 - 1]))))), (((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 2])) : (((/* implicit */int) (signed char)51))))));
                }
            } 
        } 
    } 
}
