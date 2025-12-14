/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((min(107, var_11)), var_16));
    var_21 = ((var_13 * (max(var_0, var_9))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] [i_2] = ((!((((((var_18 ? (arr_2 [i_0 - 4] [i_3]) : (arr_8 [i_2] [i_0] [i_2])))) ? (((1717732620 ? (arr_7 [i_1] [i_2]) : 17))) : (arr_3 [i_0 - 2]))))));
                            var_22 -= ((!(((var_10 ? (arr_4 [i_0] [i_0 + 1] [i_0]) : var_16)))));
                            var_23 = 114;
                            var_24 ^= (((arr_2 [i_0 - 2] [i_1]) ? (!552996916366413235) : (arr_3 [i_2])));
                        }
                    }
                }
                var_25 = (121 != var_13);
            }
        }
    }
    #pragma endscop
}
