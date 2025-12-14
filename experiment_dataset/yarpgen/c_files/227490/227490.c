/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = ((!(466832922 * -851735044)));
        var_16 = ((!((((arr_1 [i_0 + 1] [i_0 - 1]) ? (arr_1 [i_0] [i_0 - 1]) : (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = 10684;
        arr_8 [i_1] = (min(7573, 26326862));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    {
                        var_17 = (var_5 == var_2);
                        arr_21 [i_2] [i_3] [i_2] = ((0 ? 1920983265 : 607603949));
                        arr_22 [i_2] [i_2] [i_2] [i_4] = 6176664;
                    }
                }
            }
        }

        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            arr_25 [i_2] = ((~(arr_15 [i_2] [i_6] [i_6] [i_6 + 1])));
            arr_26 [i_2] = (((arr_17 [i_2] [i_6 + 1] [i_2] [i_2] [i_2] [i_6 - 3]) == (arr_19 [i_2] [i_6] [i_2] [i_6 - 3])));
            arr_27 [i_2] [i_6] = (arr_6 [i_2] [i_6]);
        }
        arr_28 [i_2] = (var_9 ? (~var_4) : (!52108));
    }
    var_18 = ((((((var_3 <= var_3) ? (!var_14) : var_0))) ? ((max(4294967295, 3))) : 255));
    #pragma endscop
}
