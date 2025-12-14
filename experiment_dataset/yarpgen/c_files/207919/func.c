/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207919
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) max((min((arr_1 [i_0] [i_1]), ((unsigned short)63))), (arr_4 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65468))))))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_9))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned short) (unsigned short)65464))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)48)) <= (((/* implicit */int) arr_3 [i_1] [i_2]))))))) : (((/* implicit */int) var_3))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_0);
    var_23 = ((/* implicit */unsigned int) var_14);
}
