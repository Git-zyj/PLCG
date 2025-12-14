/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((min((min(-2115754911, 2115754888)), var_12))) ? ((var_15 ? -var_16 : (!14099))) : (~var_0))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((9270061947624687154 ? 194 : 8847));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_12 [16] [16] [i_2] [i_2] = (arr_11 [i_0 + 1] [i_3 + 3] [18] [i_3 + 1] [15]);
                        var_20 = ((+((((arr_2 [i_0]) && (arr_7 [i_0] [i_0] [i_0] [i_0]))))));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_16 [i_0] [11] [2] [i_1] = (((arr_2 [i_3 - 1]) ? var_15 : var_3));
                            var_21 = (min(var_21, (((26275 ? (((0 ? var_11 : (arr_6 [i_0])))) : -4778329431028171247)))));
                        }
                    }
                }
            }
        }
        var_22 = (min(var_22, ((((var_6 ? (arr_7 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : 9223372036854775807))))));
        arr_17 [i_0] [i_0] = ((~(((arr_8 [i_0] [i_0 - 1] [i_0] [20]) | 73))));
        arr_18 [i_0] = ((2196229658 ? 266459179480815561 : 30));
    }
    for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_23 -= max((-9223372036854775807 - 1), ((max((!-266459179480815561), (arr_19 [i_5 + 4])))));
        arr_22 [i_5] [i_5 + 4] = 1457548315;
        var_24 = (max(var_24, ((min(((var_3 ? (arr_19 [i_5 + 1]) : var_1)), (((arr_19 [i_5 + 3]) ? (arr_19 [i_5 + 3]) : var_16)))))));
    }
    for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_25 = var_17;

        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_26 = (min((((~(!243)))), ((var_17 ? -var_15 : 18446744073709551615))));
            var_27 -= ((((min(5206336582029706480, (arr_24 [i_7])))) ? (!var_7) : 2091258124));
            var_28 = (min((arr_13 [i_6] [i_7] [i_6] [i_6] [i_7] [i_6 + 1] [i_6]), (max((((-(arr_11 [i_6 + 4] [i_6] [5] [i_6 + 2] [i_6])))), (max(var_11, (arr_9 [i_6] [i_6 + 3] [i_6] [i_6])))))));
        }
        /* vectorizable */
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            arr_29 [i_6] [i_8 - 2] = ((var_15 ? var_11 : (arr_4 [i_6] [1])));
            arr_30 [6] [i_8] = (((arr_25 [i_8 + 3]) ? (arr_25 [i_8 - 2]) : (arr_25 [i_8 - 1])));
        }
        var_29 = (max(var_29, (-2147483647 - 1)));
    }
    var_30 = ((((max(((var_5 ? 37008 : var_10)), var_9))) ? var_3 : (~-8821)));
    #pragma endscop
}
