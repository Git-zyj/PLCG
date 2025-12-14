/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(((((12105223893694467133 ? var_3 : var_9))) ? var_6 : ((min(var_8, var_5)))))));
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (arr_3 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_17 = ((65521 ? ((-(~168))) : (arr_5 [i_3] [i_2] [3])));
                            var_18 = var_8;
                            var_19 = 6341520180015084467;
                        }
                    }
                }
                var_20 = (((min(((-(arr_8 [i_0] [i_0] [6] [i_0] [6]))), 5))) ? (max(6341520180015084482, 6341520180015084467)) : (((max((arr_1 [i_1 + 1] [i_0]), ((min(var_9, (arr_7 [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
