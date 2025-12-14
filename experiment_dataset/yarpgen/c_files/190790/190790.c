/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    var_19 = (((max((arr_3 [i_2 + 1] [i_2 - 1]), (~-24792))) - var_11));
                    var_20 |= ((((var_0 || (((96 ? 9198342932440383902 : -24792))))) ? ((((~(arr_3 [i_1] [1]))))) : -24792));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_21 = (arr_3 [17] [i_1]);
                    var_22 = (((arr_7 [i_1] [i_3]) ? var_8 : ((-24792 ? 4294967295 : 4228921572))));
                    var_23 = -123;
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_24 = var_16;
                                var_25 = var_11;
                            }
                        }
                    }
                    var_26 = (max(4579, ((var_16 ? (!-7031518868546232672) : (max(6761806817330837476, (arr_6 [i_4])))))));

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_1] [15] [i_7] = (((~(arr_2 [i_4]))));
                        arr_23 [14] [i_1] [i_4] [i_4] [12] = ((((((arr_17 [i_0] [i_1] [i_1] [i_7]) << (((arr_17 [i_0] [i_1] [i_0] [i_7]) - 783502848))))) ? 24791 : (((min((arr_9 [i_0] [i_4] [i_7]), var_8))))));

                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_27 = max(7105447703180990778, 143);
                            var_28 = ((~(arr_7 [i_0] [i_0])));
                        }
                        var_29 = (max(var_29, ((0 ? ((var_3 * (4267383704 == 1073741824))) : ((((arr_2 [i_0]) < (arr_2 [i_0]))))))));
                        var_30 *= (min((~-1), (min(201, (((arr_9 [i_0] [i_1] [i_4]) ? 4558 : (arr_3 [i_1] [i_1])))))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        arr_29 [i_4] [i_1] [i_4] = (arr_1 [i_1]);
                        var_31 = (max(var_31, ((((arr_0 [i_0] [i_0]) ? var_5 : (arr_15 [i_0] [i_4] [i_0] [i_0] [12]))))));

                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            var_32 = (var_0 || var_9);
                            arr_33 [i_10] [i_9] [i_4] [i_1] [i_0] = ((((((arr_20 [i_0] [4] [4] [i_9] [12] [i_1]) ? 65535 : var_3))) ? 45558 : (!1)));
                            var_33 = (((((arr_19 [i_0] [i_10]) << (((arr_9 [i_0] [i_0] [i_0]) - 30862)))) << (45540 - 45479)));
                        }
                        var_34 = -104;
                        var_35 = (!143);
                    }
                }
                var_36 = (arr_8 [i_1]);
                var_37 = (((((((arr_2 [i_0]) ? var_16 : ((45512 ? (arr_15 [i_1] [i_0] [i_0] [i_0] [i_0]) : (arr_28 [i_1] [i_1]))))) + 2147483647)) << ((((139043016 << (((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]) - 11224)))) - 278086032))));
                arr_34 [i_0] [i_1] [i_0] = (min((arr_12 [0] [i_1] [i_1] [0]), var_12));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 8;i_12 += 1)
        {
            {
                var_38 = (max(var_38, (((((arr_18 [i_11] [6] [i_12] [i_11] [i_11]) ? (arr_18 [i_11] [4] [i_12] [i_12] [i_11]) : var_5))))));

                /* vectorizable */
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    arr_42 [i_12] = ((1 ? (arr_24 [i_12 + 1] [i_12 + 2] [i_12 - 1] [i_12 + 1] [i_12 + 2]) : (arr_24 [i_12 + 2] [i_12 + 2] [i_12 + 1] [i_12 - 1] [i_12 + 1])));
                    var_39 = (((arr_19 [i_12 + 2] [i_12 + 1]) && var_7));
                    var_40 = (-var_4 * 1);
                    var_41 = (max(var_41, (((((arr_11 [i_12 + 1]) + 2147483647)) << (((((arr_11 [i_12 + 1]) + 111)) - 17))))));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    arr_45 [i_12] = (arr_36 [i_12 - 1] [i_12 - 1]);
                    var_42 |= (((((0 ? var_11 : (arr_10 [i_11] [i_11])))) || 16980801904708778546));
                }
            }
        }
    }
    var_43 = (min(var_43, var_10));
    #pragma endscop
}
