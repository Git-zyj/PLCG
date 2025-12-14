/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = ((((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : (arr_0 [i_0 - 1])))) ? -var_6 : (((arr_0 [i_0 - 1]) ? var_14 : (arr_0 [i_0 - 1])))));
                arr_6 [i_1] [2] [i_0] = ((((min((arr_2 [i_0 - 1]), var_3))) ? 17494 : -501642672193140058));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_22 [i_6] [i_3] [i_4] [i_3] [i_2] = (((arr_16 [i_3] [i_5] [i_5 + 1] [i_3]) ? (arr_8 [i_2 + 1] [i_5 - 2]) : var_0));
                            arr_23 [i_6] [i_5] [i_3] [i_3] [i_2] = (arr_15 [i_5 - 2] [i_3]);
                        }
                    }
                }
            }
            arr_24 [i_3] [i_3] = (501642672193140058 && var_17);
        }
        arr_25 [i_2] = (!(!17515));
    }
    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_19 += (~72057594037927904);
            var_20 *= (arr_28 [i_7]);
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_38 [i_11] [i_9] [i_9] [i_10] [i_10] [i_11] = (!var_7);
                        arr_39 [i_11] [i_9] = -1952135286;
                        arr_40 [i_11] [i_11] = ((+(max((((arr_36 [3] [3]) ? var_15 : var_7)), -var_0))));
                        var_21 = 1952135279;
                    }
                }
            }
            var_22 = arr_10 [i_7] [i_9];
        }
        arr_41 [i_7 + 2] [i_7] = (min(((var_17 * (arr_16 [12] [i_7 + 1] [i_7] [12]))), 1952135297));
        arr_42 [i_7] = ((-((((arr_34 [i_7 + 2]) && (arr_34 [i_7 - 1]))))));
    }
    #pragma endscop
}
