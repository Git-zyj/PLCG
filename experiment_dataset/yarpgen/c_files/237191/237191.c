/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_15 = (((arr_3 [i_0] [20] [i_0]) ? ((var_1 ? var_6 : var_2)) : ((~(arr_1 [i_0])))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_10 [i_2] [i_1 - 2] [i_1] [24] = (arr_3 [i_0] [1] [i_0 - 4]);
                        var_16 = ((var_10 ? 8056794266280003485 : 4720));
                        arr_11 [i_2] [i_2] [i_1 - 1] [i_1] [i_1] [i_2] = (((4722 >= 32704) ? var_14 : 4709));
                    }
                }
            }
            var_17 = ((var_11 ? (arr_3 [i_0] [i_0 - 3] [i_1 + 1]) : 4736));
        }
        var_18 = (min(var_18, ((((!var_3) ? (((var_11 < (max((arr_3 [i_0 + 2] [i_0] [13]), var_4))))) : (max((arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0] [2] [i_0 - 2]), (((arr_3 [12] [1] [i_0]) - 1)))))))));
        arr_12 [i_0] [i_0 + 3] = (arr_3 [i_0] [12] [12]);
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = (arr_5 [i_4] [i_4] [i_4] [i_4]);
        var_19 = (max(var_19, (arr_2 [i_4] [i_4] [2])));
        arr_17 [i_4] = 60809;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_20 = ((124 == (arr_20 [i_5])));
        arr_21 [i_5] = ((!(arr_14 [i_5])));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_30 [i_5] [2] [i_7] [i_6] [i_9] = 2527611254858989848;
                            var_21 = (60809 ? (arr_0 [i_5] [22]) : (arr_22 [i_6 + 3]));
                        }
                        arr_31 [i_5] [i_6] [i_8] [i_8] = (~127280195117461754);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        var_22 = (min(var_22, var_7));
        var_23 = 13978705801437428836;
        var_24 = (min(var_24, (arr_8 [i_10] [4] [4] [12])));
        arr_35 [i_10] [i_10] = (arr_3 [i_10] [i_10] [i_10]);
    }
    var_25 = var_10;
    var_26 = (max(4736, (~var_0)));

    /* vectorizable */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        var_27 = (arr_13 [i_11]);
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 13;i_13 += 1)
            {
                {
                    var_28 = 11235;
                    var_29 = (((!1073741824) ? 31325 : (127280195117461753 - 60827)));
                }
            }
        }
    }
    #pragma endscop
}
