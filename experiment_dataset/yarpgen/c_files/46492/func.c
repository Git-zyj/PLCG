/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46492
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
    var_10 = var_5;
    var_11 = var_1;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_12 *= 1401698131U;
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_13 = var_0;
                    var_14 = (+(0U));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_3] [7U] [12U] [i_3 + 1] = ((((/* implicit */_Bool) ((unsigned int) ((unsigned int) 4206593915U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1402500035U)))))) : ((-(var_7))));
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((unsigned int) ((unsigned int) 4206593915U)))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((((/* implicit */_Bool) (~(1215573128U)))) ? ((~(var_9))) : ((~(var_8)))))));
                        arr_17 [14U] [4U] [i_1] [21U] [14U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1119446074U)))) ? (395613024U) : ((+(3266606264U))))))));
                        arr_18 [i_0] [i_0] [5U] = ((unsigned int) ((unsigned int) 684109738U));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 1; i_5 < 21; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned int) min((var_17), (3079394168U)));
                        var_18 *= 2263328015U;
                        arr_21 [i_1 + 1] &= var_1;
                    }
                    var_19 = var_9;
                    arr_22 [i_0] [i_0] [i_0] [i_2] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (var_2)))) ? (var_3) : ((~(2027733297U))))));
                }
            } 
        } 
    }
}
