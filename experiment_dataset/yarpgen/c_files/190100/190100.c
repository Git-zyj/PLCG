/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_3 ? (-12 & var_8) : var_8)) - var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = 0;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        arr_13 [13] [i_1] [i_1] [i_0] = ((!(arr_8 [i_2 - 1] [12] [i_2 - 1] [i_1 + 1])));
                        var_14 = (1 || (arr_12 [i_1 - 1] [i_2 - 1] [i_2 - 1]));
                        arr_14 [i_1] [i_1] [i_1] [i_1] = (((((20 ? (arr_12 [i_0] [i_1 - 1] [17]) : 896))) ? (arr_9 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_2 - 1]) : (!1)));
                        arr_15 [i_0] [i_0] [i_1] [i_0] = ((156 | (~var_3)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        var_15 = (max(var_15, 172470932));
                        arr_20 [i_0] [i_1] = ((-(arr_5 [i_2 - 1] [i_1])));
                        var_16 = (((arr_10 [i_0] [i_1]) ? var_2 : (~var_10)));
                        var_17 = ((var_8 ? var_7 : 4294967295));
                    }
                }
            }
        }
    }
    #pragma endscop
}
