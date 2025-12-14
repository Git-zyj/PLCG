/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] = var_3;
                            var_10 = ((var_2 ? (arr_7 [3] [i_2] [i_2] [i_2]) : 6645795241437519889));
                        }
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_11 = -3;
                            arr_19 [i_5] [i_1] [i_2] [i_1] [i_1] [i_0] = (min(-32754, (~var_7)));
                            var_12 = (min(var_12, (max((((((min((arr_9 [i_2] [i_0]), (arr_15 [i_0] [i_1] [16] [i_3] [i_5])))) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((15 != (arr_12 [15] [i_0] [i_1] [21] [11] [21] [22]))))))), (arr_17 [i_3] [i_3] [i_2] [i_3] [i_1] [i_0])))));
                            arr_20 [18] [i_1] [i_0] [i_3] [i_0] [i_1] = ((arr_11 [i_1 + 1] [i_1 - 1] [i_5 + 1]) ? (((max((((arr_4 [i_0] [i_1] [i_2]) == var_0)), (-6645795241437519872 != var_4))))) : (max((max(87, var_6)), -1220188742)));
                            var_13 = (arr_4 [i_0] [i_2] [i_0]);
                        }
                        arr_21 [i_0] [i_1] [i_1] [i_3] = (((-(!118))));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        arr_24 [i_0] [i_1] [i_1] = ((~(arr_6 [i_2] [i_6 + 1] [i_6] [i_6])));
                        arr_25 [i_0] [i_2] [i_0] [i_1] = (arr_5 [i_0]);
                        var_14 = (min(var_14, (arr_12 [i_1] [i_1] [i_1] [i_6] [i_1] [i_0] [i_6])));
                        arr_26 [i_1] [i_1] = ((59959 ? (arr_4 [i_6 + 1] [i_6 + 2] [i_1 + 1]) : (arr_4 [i_6 - 3] [i_6 - 3] [i_1 + 1])));
                    }

                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_1] = var_5;
                            var_15 = ((-(arr_6 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1])));
                            var_16 = (max(var_16, (((((!(arr_11 [i_0] [14] [i_2]))) ? -6645795241437519868 : var_3)))));
                            var_17 = (arr_18 [i_1] [i_1] [i_1] [i_1 - 1] [i_2]);
                            var_18 = (((118 < 1) - (((var_4 && (arr_2 [14]))))));
                        }
                        arr_33 [i_0] [i_1] [i_1] [4] [i_7] = (max(((((((arr_2 [i_7]) || (arr_2 [i_1]))) || (arr_27 [i_0] [i_0] [i_1 - 1] [i_1] [i_1] [i_7])))), (~var_0)));
                        var_19 = (max(var_19, (((-12568982005142435 ? var_8 : -1371515264)))));

                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            arr_37 [i_1] [i_2] = (((((((arr_3 [i_0] [i_1]) ^ var_6)))) ? (var_2 > 123) : (min(-var_3, (arr_17 [i_9] [i_9 - 1] [i_9] [i_9] [i_9] [i_1])))));
                            var_20 = (arr_29 [i_0] [i_2] [i_2] [i_2] [i_2] [i_7]);
                        }
                        arr_38 [i_1] [i_1] = (min((((var_3 ? var_9 : var_5))), var_9));
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                {
                    var_21 -= 17966708708014318062;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 22;i_12 += 1)
                        {
                            {
                                arr_46 [17] [i_1] [i_12] [i_1] [i_1] = -1196365091;
                                arr_47 [i_0] [i_0] [8] [i_1] [8] = -var_4;
                            }
                        }
                    }
                    var_22 = (arr_35 [i_10] [i_1] [17] [i_10]);
                }
                var_23 = (((min((arr_22 [i_1]), var_9)) >= ((-6645795241437519893 ? (arr_22 [i_1]) : (arr_39 [i_1 - 1] [4] [i_1])))));
                arr_48 [i_0] [i_1] [i_0] = ((var_0 / ((-(max(-2080005162, 190))))));
                var_24 *= ((((min(1, var_9))) >= var_9));
            }
        }
    }
    var_25 = ((((min(234, 2102))) ? (1 + 31) : var_2));
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        for (int i_14 = 4; i_14 < 18;i_14 += 1)
        {
            {
                arr_54 [i_13] [i_14] = 1;
                var_26 = (min(var_26, var_8));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        for (int i_16 = 2; i_16 < 19;i_16 += 1)
        {
            {
                var_27 = (max((arr_0 [i_16] [i_15]), ((max(var_2, 3507092155)))));
                var_28 |= (arr_6 [i_15] [i_15] [i_16] [i_16]);
            }
        }
    }
    #pragma endscop
}
