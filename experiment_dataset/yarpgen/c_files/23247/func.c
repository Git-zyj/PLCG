/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23247
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
    var_11 = ((/* implicit */_Bool) ((unsigned int) max((4294967295U), (0U))));
    var_12 = ((/* implicit */_Bool) min(((~(var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (938773658U)))) ? (((/* implicit */int) (short)19878)) : (((/* implicit */int) ((short) var_2))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) min((var_13), (((((((_Bool) var_10)) || (((/* implicit */_Bool) (short)16462)))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) (unsigned short)112))))))));
                    arr_8 [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12568))) & (((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (793094410U))) ? (min((((/* implicit */unsigned int) var_9)), (793094410U))) : (4094857295U))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
    }
}
