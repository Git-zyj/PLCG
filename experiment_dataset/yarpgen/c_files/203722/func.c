/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203722
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
    var_15 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 382795287U))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 4; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) (short)2996)))));
                        arr_10 [i_0] [i_0] [i_2] [i_3] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_0 + 1] [i_1] [i_3 + 2]))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 3] [i_0 - 3] [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) 3912172008U))))));
    }
}
