/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((var_1 ? var_12 : var_9))) && var_12))) < ((((var_0 || var_6) > -113028877)))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 = (!113028870);
        var_17 -= (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_4 [i_1] = (max(var_10, ((13 ? (((arr_3 [i_1]) - var_1)) : (max((arr_3 [i_1]), -1681091616))))));
        var_18 = (1 >> (((-127 - 1) + 128)));
        var_19 = max((((~var_11) ? (arr_3 [i_1]) : (arr_3 [i_1]))), (max((max(941765725, 118)), ((~(arr_2 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_20 = (min(var_20, ((((((-95 + 2147483647) >> (1048572 - 1048563))) == (arr_6 [i_2]))))));
        var_21 = (arr_5 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_22 += (((arr_5 [1]) == var_2));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_23 = ((-((9 ? 1 : 1048560))));
                        var_24 = (1 ? -32 : -3);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_25 = ((1 + (arr_10 [i_2] [i_3 - 2] [1])));
                        var_26 = (max(var_26, (((~(((arr_16 [i_4] [i_3]) ? var_9 : (arr_9 [i_2] [i_2] [i_2] [i_6]))))))));
                        arr_18 [i_2] [i_2] [i_4] [i_2] = (-15 != 113);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_27 += (((~(arr_17 [i_2] [i_3] [1] [i_7]))) != (-12 | -52));
                        var_28 = (-18 < 1274647291);
                        var_29 = (~48);
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_24 [1] [1] [i_4] [i_2] = (arr_22 [i_2] [i_3] [i_4]);

                        for (int i_9 = 2; i_9 < 13;i_9 += 1)
                        {
                            var_30 = ((((-(arr_21 [i_2] [8] [i_4] [i_8]))) >= ((var_8 ? (arr_23 [i_2] [1] [i_8] [i_9]) : (arr_22 [i_3] [i_3] [13])))));
                            arr_28 [i_2] [i_4] [i_2] = (arr_12 [i_4] [i_2] [i_2] [i_8]);
                            var_31 = (((arr_17 [9] [i_3 + 1] [i_3] [i_3 - 3]) ? (arr_20 [13] [i_3 - 1] [i_2] [i_3 - 1]) : (arr_17 [i_3] [i_3 - 1] [i_3] [i_3 + 1])));
                        }
                    }
                    var_32 = -1128812852;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_33 = (min(var_33, (1 != -106)));
                                var_34 = (arr_12 [i_2] [i_2] [i_10] [i_10]);
                            }
                        }
                    }
                }
            }
        }
        var_35 = 16;
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        var_36 -= 1;
        var_37 = ((((arr_38 [i_12]) ? var_6 : (arr_37 [i_12] [i_12]))) ^ -662838357);
        var_38 = (((((-(arr_36 [i_12] [i_12])))) ? -1048573 : (min(((-(arr_36 [i_12] [i_12]))), ((880160405 & (arr_36 [17] [17])))))));
        arr_39 [i_12] = (((((-124 ? (!var_3) : var_12))) ? var_2 : 11952237));
        var_39 = ((((112 || ((((arr_37 [i_12] [i_12]) & (arr_37 [i_12] [i_12]))))))) != (max(-1274647302, 22)));
    }
    #pragma endscop
}
