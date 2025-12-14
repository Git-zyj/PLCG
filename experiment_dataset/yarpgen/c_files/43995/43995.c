/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (!var_15);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0] = var_11;
                        arr_15 [i_0] [i_0] [i_2] [i_3] = (var_14 ? var_0 : var_8);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 22;i_5 += 1)
            {
                {
                    var_16 = (((var_9 < var_5) ? ((var_6 ? -1919207700201259232 : 1919207700201259234)) : var_3));

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_17 = 66;
                        var_18 += var_7;
                        var_19 = ((-(133 > var_0)));
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_4] [i_4] [i_7] &= -56;
                        arr_27 [i_7] [i_0] [i_0] [17] = ((259151870611125779 ? var_13 : 111));
                        var_20 = (((var_1 || var_15) ? var_1 : var_13));
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_8] [i_0] [i_0] [i_0] = var_2;
                        var_21 = (min(var_21, ((((((var_4 ? 4611650834055299072 : var_3))) ? var_8 : var_7)))));
                        var_22 = ((((var_15 ? var_1 : var_14)) / ((-8105429302345226539 ? -9 : var_0))));
                    }
                    var_23 = 1;
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        arr_34 [i_9] = (((((var_6 ? var_14 : var_12))) || (((((max(-11298, var_4))) ? -8105429302345226539 : ((var_8 ? 0 : 7429435628370689960)))))));
        var_24 = ((11017308445338861655 ? -1 : 240));
        var_25 = 11017308445338861655;
    }
    var_26 = (-9223372036854775807 - 1);
    #pragma endscop
}
