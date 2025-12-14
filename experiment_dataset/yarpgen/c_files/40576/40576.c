/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [10] [i_1] [i_0] = 183;
                arr_7 [i_0] [i_0] [i_0] = (min(var_12, 817));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_11 [i_2] = ((var_12 < (!var_13)));
                    var_14 = (max(var_14, ((((arr_9 [i_0] [i_0] [i_1] [i_2]) <= -17)))));
                    var_15 = (arr_2 [i_2]);
                    var_16 = (max(var_16, 23));
                    var_17 = (((arr_8 [i_1]) ? 2 : (arr_2 [i_1])));
                }
            }
        }
    }
    var_18 = (var_11 < var_7);
    var_19 = (max(var_19, var_3));
    var_20 = ((((min(-var_10, ((0 ? var_3 : var_2))))) < (min(((max(var_0, var_4))), (min(var_7, 0))))));
    #pragma endscop
}
