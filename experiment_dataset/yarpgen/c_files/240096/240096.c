/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 ^= (((((15 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))) ? ((0 * (arr_0 [i_0 - 1]))) : ((((arr_0 [i_0 - 1]) / (arr_0 [i_0 - 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 = arr_3 [i_0 - 1] [i_0];
                            var_17 = (max(var_17, ((max((((!0) ? ((var_2 ? (arr_4 [i_3] [i_3] [i_2]) : 1)) : (~1398937970))), (arr_8 [i_0] [i_3] [i_3] [i_3]))))));
                            arr_9 [i_0 - 1] [i_0] [i_2] [i_3] = (-127 - 1);
                            var_18 = arr_5 [i_0] [i_0];
                        }
                    }
                }
                arr_10 [i_0] = ((((((!(arr_3 [i_0] [i_1 + 1]))))) + (arr_2 [i_0] [i_1 + 2] [i_0])));
                var_19 = 2279365518;
                arr_11 [i_0] [i_0] [i_0] = (arr_7 [i_0] [5] [i_0] [12]);
            }
        }
    }
    var_20 |= (((((4294967295 ? (1398937970 - 2331323646) : (var_14 && var_13)))) ? (((((min(var_4, var_1)) != var_7)))) : var_9));
    #pragma endscop
}
