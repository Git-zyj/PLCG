/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207142
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
    var_12 += var_0;
    var_13 = ((unsigned int) (((-(var_1))) >> (((var_7) - (1300968807U)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_14 = (~(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) / (((((/* implicit */_Bool) arr_1 [1U] [19U])) ? (var_3) : (var_6))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0] [i_0]) : (var_11))))) || (((/* implicit */_Bool) arr_0 [i_0]))));
        arr_4 [i_0 - 1] = ((((/* implicit */_Bool) ((unsigned int) (~(var_7))))) ? (((unsigned int) arr_2 [i_0 + 1])) : ((+(((((/* implicit */_Bool) var_7)) ? (2521142211U) : (var_0))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_2] [i_2] = max((2521142218U), (arr_8 [i_0] [i_1] [i_2] [i_0 + 1]));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] = ((((/* implicit */_Bool) ((unsigned int) 1773825062U))) ? (((unsigned int) var_6)) : (((4294967285U) >> (((var_8) - (105388858U))))));
                        arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] = ((unsigned int) (~(var_2)));
                    }
                    var_15 += (-((~(((var_4) << (((3622062136U) - (3622062116U))))))));
                }
            } 
        } 
    }
}
