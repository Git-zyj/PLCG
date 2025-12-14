/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = ((-11117 ? -11117 : -26650));
        var_11 -= ((-var_6 ? (arr_0 [i_0] [i_0]) : (((arr_0 [i_0] [i_0]) ? -4281709462716109002 : -32748))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = (arr_5 [i_2] [i_2] [i_0] [i_0]);
                    var_12 -= (((arr_5 [i_0] [i_0] [i_2] [i_2]) & 11117));
                    arr_8 [i_1] [i_1] [i_2] = ((~(arr_2 [i_2])));
                    var_13 = (arr_6 [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = ((((((arr_11 [i_2] [i_1] [i_2] [i_3] [4]) ? -2948225530941310694 : var_5))) ? var_1 : var_8));
                                var_15 = (~var_0);
                                var_16 = (((var_3 <= 224) & (((arr_12 [i_1] [i_1] [i_2]) ? (arr_14 [i_0] [i_2] [17] [i_3] [i_4]) : (arr_1 [i_0])))));
                            }
                        }
                    }
                }
            }
        }
        var_17 = (arr_10 [i_0] [i_0] [i_0] [8] [i_0] [i_0]);
        var_18 = (min(var_18, ((((31 <= var_3) ? 25098 : var_6)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {

        for (int i_6 = 4; i_6 < 17;i_6 += 1)
        {
            var_19 -= (((arr_0 [i_6] [i_6 + 2]) ? (arr_0 [1] [i_6 + 2]) : -9570));

            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_20 = ((((var_5 > (arr_6 [i_7] [i_7]))) ? 217 : (arr_16 [i_6 - 1])));
                arr_22 [11] [i_6] = 4294967295;
                var_21 = 3912652075;

                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_22 = (((((11116 ? (arr_1 [i_5]) : 32))) ? (arr_6 [i_5] [i_5]) : var_6));
                    var_23 &= ((~(arr_13 [i_5] [i_5] [i_7] [i_7] [i_6 + 2])));
                }
            }

            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                arr_27 [6] [4] = -25594;
                var_24 = (arr_9 [i_6 - 2] [i_6 - 2] [i_5] [i_6]);
            }
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                var_25 = ((-11133 ? (((arr_18 [i_5] [i_6] [i_5]) ? 8720145310432685988 : 1)) : (var_9 ^ -880495702)));
                arr_31 [i_5] = (((arr_17 [i_6 - 1] [i_6 - 1]) <= (arr_17 [i_6 - 1] [i_5])));
                arr_32 [i_5] [14] [i_6] [5] = 1;
            }
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                var_26 = (((arr_30 [i_6 + 1]) ? (arr_19 [i_6 + 2]) : (arr_19 [i_6 - 2])));
                var_27 -= 21;
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_28 = 1;
                            var_29 = ((1 ? (arr_13 [i_5] [1] [i_11] [i_12] [i_11]) : 31));
                            var_30 = (min(var_30, ((((arr_5 [i_12] [i_11] [i_6 - 4] [i_12 - 3]) ? (((arr_12 [i_6] [0] [i_11]) << var_8)) : (((var_8 ? var_3 : (arr_29 [i_5] [i_6])))))))));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 3; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    {
                        var_31 = var_7;
                        var_32 = (((arr_37 [i_5] [i_14 - 3] [i_14 - 3] [i_14 + 1] [i_14]) >> (arr_25 [i_14] [17] [i_14 - 2])));
                    }
                }
            }
        }
        var_33 = var_4;
        var_34 |= (((arr_40 [i_5] [i_5]) & (arr_40 [i_5] [4])));
    }
    for (int i_17 = 3; i_17 < 12;i_17 += 1)
    {
        var_35 = ((((((arr_21 [i_17 + 1]) < var_4))) >= ((min((arr_21 [i_17 - 1]), (arr_21 [i_17 - 3]))))));
        var_36 -= (arr_28 [i_17]);
    }
    var_37 = (1 < var_8);

    /* vectorizable */
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        var_38 = (((4294967295 ? 1 : 32)));
        var_39 = (arr_25 [i_18] [i_18] [i_18]);
        var_40 &= (((arr_26 [i_18] [i_18] [i_18]) ? (arr_26 [i_18] [i_18] [i_18]) : (arr_26 [i_18] [i_18] [i_18])));
        var_41 = ((-(arr_18 [i_18] [i_18] [i_18])));
    }
    for (int i_19 = 0; i_19 < 12;i_19 += 1)
    {
        var_42 += ((!((((arr_37 [i_19] [i_19] [0] [i_19] [i_19]) ? var_1 : (arr_49 [i_19] [i_19] [i_19] [i_19]))))));
        var_43 = var_6;
    }
    var_44 = (min(var_0, var_7));
    #pragma endscop
}
