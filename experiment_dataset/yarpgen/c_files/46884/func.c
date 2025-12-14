/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46884
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned int) var_3)), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 3141098569U)))))));
                        arr_9 [i_2] [i_2 - 2] [i_2 - 2] [i_1] [i_2] = ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) var_12))))))));
                    }
                    arr_10 [(short)7] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)4240)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-19876))) + (781521684U)))))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned int) var_4);
        arr_11 [i_0] = ((/* implicit */short) var_2);
    }
    var_15 = ((/* implicit */unsigned int) var_12);
}
