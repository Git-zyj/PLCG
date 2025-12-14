/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [7] [i_0] = (arr_0 [i_0]);
        var_14 = (var_7 == var_1);
    }

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = (min(1, (((min((arr_5 [i_1]), var_1)) & (((var_10 ? (arr_4 [i_1]) : 0)))))));
        var_15 = (max(((max((arr_4 [i_1]), (arr_4 [i_1])))), (((arr_4 [i_1]) ? 4985609183386714194 : (arr_4 [i_1])))));
        var_16 = min((min(var_9, (arr_3 [i_1]))), (arr_3 [i_1]));
        var_17 += ((!(((345349176 * (arr_5 [i_1]))))));
        arr_7 [i_1] [i_1] = (((arr_3 [i_1]) - 4294967295));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_12 [1] = (arr_4 [i_2]);
        var_18 -= (-var_3 || 17839106880528539853);
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        arr_16 [i_3] = 16598812132991080960;
        var_19 += (arr_13 [i_3 + 1]);

        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {
            arr_19 [i_3] [i_3] [i_4] = (max(562949953421312, ((max((arr_17 [i_3 + 2]), (arr_17 [i_3 + 4]))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_20 = (arr_28 [i_3]);
                            var_21 = (((arr_28 [i_3]) & ((~(((21 == (arr_28 [i_3 + 3]))))))));
                            var_22 &= 23898;
                            var_23 = (min(var_23, 19260));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
        {
            arr_34 [i_8] [i_3] = ((min(0, (arr_26 [i_3] [i_3] [i_3] [i_3]))));
            var_24 = (min(((((arr_31 [i_3] [i_3] [i_8] [5] [i_8]) - ((min(var_11, 32373)))))), (min((max(4294967285, 0)), 22))));
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
        {
            var_25 = ((!((min(var_2, 65521)))));
            var_26 = (+((+(min((arr_15 [i_3]), 793201175)))));
        }
    }
    #pragma endscop
}
