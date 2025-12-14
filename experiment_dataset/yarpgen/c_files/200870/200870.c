/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_4;
    var_19 = (~-var_15);
    var_20 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_0] [9] = (arr_11 [i_1] [i_1] [i_1] [i_1]);
                        var_21 -= (arr_11 [i_0] [i_2 - 1] [i_2 - 1] [i_2 + 1]);

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] [i_0] [i_0] = var_1;
                            var_22 = (min(var_22, (arr_10 [i_2] [i_2])));
                            arr_16 [i_4] [i_1] [i_0] = ((~(((arr_10 [i_0] [i_1]) ^ (arr_11 [i_1] [i_1] [i_1] [i_3])))));
                        }
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            var_23 = (arr_9 [i_2 + 1] [i_1] [i_5 + 1] [i_3]);
                            var_24 = (min(var_24, (~5199)));
                        }
                    }
                    var_25 = (min(var_25, (arr_17 [i_0] [i_1] [i_0] [i_2])));
                    var_26 = (arr_3 [i_0] [i_1] [i_0]);
                    arr_19 [10] [i_1] [i_1] [i_0] = (arr_11 [i_1] [i_1] [i_1] [i_1]);
                }
            }
        }

        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_27 = (arr_22 [i_0] [i_6] [i_7]);
                var_28 *= (arr_25 [i_0] [i_0]);
            }
            arr_26 [i_0] [1] = (!(arr_22 [i_0] [i_6] [i_6 - 1]));
            arr_27 [i_6] = (arr_0 [i_6 + 1]);
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_29 = (((arr_31 [i_0]) >= (arr_20 [i_0] [i_0] [i_8])));
            arr_32 [i_0] [i_0] = (arr_14 [i_0] [i_8] [i_8]);
        }
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            var_30 *= (((arr_34 [0] [i_9 + 3]) != 896472973));
            arr_35 [i_0] [i_9 + 1] = ((!(arr_24 [12] [i_0] [i_0] [i_9 - 1])));
            arr_36 [i_9] = var_11;
            arr_37 [i_0] [i_9] [i_9 + 2] = 4808506349621180717;
        }

        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_31 = (min(var_31, ((((arr_33 [11] [i_10] [i_10]) ? (((var_16 < (arr_38 [i_0] [i_0] [9])))) : (!704529115))))));
            arr_41 [i_0] [i_0] [i_10] |= ((-4808506349621180717 ? 26 : (((arr_21 [i_0]) ? 1031293279585381622 : (arr_5 [i_0])))));
        }
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 2; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                for (int i_14 = 4; i_14 < 23;i_14 += 1)
                {
                    {
                        var_32 = (arr_44 [i_13]);
                        var_33 *= arr_47 [i_12];
                        var_34 = (min((max((arr_43 [i_11]), (arr_46 [i_11] [i_12] [i_13] [i_14 - 4]))), (arr_47 [i_13])));
                    }
                }
            }
        }
        arr_51 [i_11] [i_11] = ((((((((arr_43 [i_11]) ^ (arr_46 [i_11] [i_11] [i_11] [1])))) ? 1664919387511372193 : (arr_48 [i_11] [i_11]))) >= (max(((48521 ? -38 : 48521)), (var_9 & -126)))));
        var_35 ^= ((!((max((arr_47 [i_11]), (-4808506349621180717 & -11221))))));
        var_36 = (arr_45 [i_11] [i_11]);
        var_37 = (min(var_37, ((-12742802942447214109 ? (((((((arr_48 [i_11] [i_11]) ? var_9 : (arr_46 [i_11] [i_11] [i_11] [i_11]))) != (arr_49 [i_11] [24] [24] [i_11]))))) : (((((arr_49 [i_11] [i_11] [i_11] [i_11]) ? (arr_44 [i_11]) : var_11)) & -22))))));
    }
    #pragma endscop
}
