/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = ((var_12 ? 1 : 1));
        var_21 = ((arr_1 [i_0] [i_0]) & (arr_0 [i_0]));
        var_22 = (((var_11 ? -9914 : -9914)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_23 = (((arr_6 [i_1]) != (arr_6 [17])));
                        var_24 = (((arr_3 [i_1]) ? (arr_6 [i_2]) : (arr_9 [2])));
                    }
                    arr_14 [i_3] = ((7046760311045113760 << (546690306 - 546690264)));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        var_25 += ((-(arr_21 [i_5] [i_6] [i_5] [i_1])));
                        var_26 = var_7;

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_27 = (var_16 && var_17);
                            var_28 = (arr_4 [i_1]);
                            var_29 *= 54906117;
                            arr_28 [i_6] [i_7] = (63972565 <= 1594663009);
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_30 = (arr_17 [i_7]);
                            var_31 = (((arr_16 [i_1] [15]) & var_18));
                            var_32 &= -1;
                        }
                        var_33 = (5 <= var_11);
                    }
                }
            }
        }
        arr_32 [i_1] = (17179869183 + -1594663028);
    }
    for (int i_10 = 4; i_10 < 21;i_10 += 1)
    {
        arr_35 [i_10] = (max((min(((max(0, (arr_33 [i_10] [i_10])))), var_10)), ((((arr_33 [i_10 - 2] [i_10 - 1]) ? var_9 : ((32767 / (arr_33 [i_10] [i_10 + 3]))))))));
        var_34 = (((arr_33 [i_10 - 2] [i_10 + 2]) ? ((((((arr_33 [i_10] [i_10]) || (arr_34 [i_10])))) << (var_16 - 4760))) : (((((var_7 | (arr_33 [i_10 - 4] [i_10])))) ? var_16 : (!34104)))));
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    {
                        var_35 = (arr_3 [i_11]);
                        arr_47 [i_11] [i_12] [i_11] [i_13] [i_14] [i_14] = (min((arr_46 [i_11] [i_12] [i_13] [i_14] [i_14] [i_12]), ((((min(var_10, var_6)) == (arr_5 [i_13] [i_12]))))));
                        arr_48 [i_11] [i_12] [i_11] [i_11] [i_11] = (arr_25 [i_11] [i_12] [i_12] [i_12] [i_12] [3] [i_14]);
                        var_36 = (min(var_36, (((!((min((arr_41 [i_14] [i_13] [i_12] [2]), (arr_13 [i_11] [i_14])))))))));
                    }
                }
            }
        }
        var_37 &= 1594663028;
    }
    var_38 = 124;
    #pragma endscop
}
