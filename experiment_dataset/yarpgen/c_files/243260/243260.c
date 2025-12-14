/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((max(var_11, 22862)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_1] = (arr_1 [i_2] [i_3 + 1]);
                        var_17 = var_6;
                        var_18 = var_8;
                    }
                }
            }
            var_19 = ((15891 ? ((((var_14 >= (arr_5 [i_0] [i_1] [i_0]))))) : (var_10 / var_11)));
        }
        for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_20 = ((var_1 ? (max((arr_0 [i_0] [i_0]), 2)) : (((arr_8 [i_0] [i_0] [i_4 + 2]) ? (arr_8 [i_0] [i_0] [i_4 + 2]) : (arr_0 [i_0] [i_0])))));
            arr_12 [i_4] [i_4] [i_0] = (((((((0 ? var_14 : var_8))))) / (((arr_0 [i_4 + 1] [i_4 + 2]) / ((((arr_2 [i_0]) ? var_6 : 15871)))))));
            var_21 = arr_8 [i_4 + 1] [i_0] [i_0];
        }
        var_22 = (max(var_22, 104));
        var_23 ^= var_5;
        arr_13 [17] = -3354694160;
    }
    var_24 = var_12;
    #pragma endscop
}
