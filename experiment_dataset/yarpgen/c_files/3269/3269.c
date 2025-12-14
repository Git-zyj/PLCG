/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_19 = (max(var_19, (((((max((arr_3 [i_0] [i_1 - 1] [i_1]), 51360))) ? var_12 : (arr_3 [3] [i_1 - 1] [i_1]))))));
            arr_4 [i_1 - 1] [i_0] = (arr_0 [i_0] [i_1]);
        }

        /* vectorizable */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            var_20 = (arr_5 [i_0] [i_2]);
            arr_9 [i_0] [i_2] [i_2 - 2] = (arr_2 [i_0]);
            arr_10 [i_0] [i_2] = (((arr_5 [i_2 + 1] [i_2 + 1]) ? (arr_5 [i_2 - 2] [i_2 - 2]) : var_12));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_21 |= arr_5 [16] [10];
        var_22 = (arr_5 [i_3] [i_3]);
        var_23 = (arr_1 [i_3]);
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        var_24 = 1196560468935998102;
                        var_25 = -1;
                    }
                }
            }
        }
    }
    var_26 = (min(((23 ? ((147 ? 65427 : var_8)) : var_14)), -72));
    var_27 = (min(var_16, 23));
    var_28 = (((((var_3 ? 1892566010 : var_17))) ? var_16 : var_2));
    #pragma endscop
}
