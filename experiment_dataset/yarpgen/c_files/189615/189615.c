/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 2063602222;
    var_15 = (min(var_15, var_2));
    var_16 = var_5;
    var_17 = (min(var_17, (!var_3)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_18 = (((arr_0 [i_0]) + (arr_0 [i_0])));
        arr_2 [0] [6] &= 146;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, 80));
                    var_20 ^= var_3;
                    var_21 += (((arr_4 [i_1]) & (arr_4 [i_1])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_22 = (min(var_22, ((((((arr_13 [16] [i_4]) == var_4)) ? var_3 : -119)))));
            arr_15 [i_4] [i_4] [i_3] = (((arr_14 [i_4] [i_4]) == 44649));
            var_23 -= ((((arr_11 [i_4] [i_3]) > -97)));
        }

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_24 += (((min((((arr_1 [i_3] [i_5]) ? -251564123 : var_12)), var_6)) < (((44654 & 31130) ? ((~(arr_10 [i_5]))) : ((-97 ? (arr_6 [i_3]) : -120))))));
            var_25 = (arr_10 [i_3]);
            arr_18 [i_3] [i_5] [i_3] = min(95, 21);
        }
        var_26 ^= ((~(arr_4 [i_3])));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_27 = max(((max((arr_3 [i_6] [i_6]), (arr_3 [i_6] [i_6])))), (((arr_11 [i_6] [i_6]) ? (min((arr_14 [i_6] [i_6]), var_8)) : var_5)));
                            var_28 -= (-706187480 <= (arr_25 [i_6] [i_7] [i_7] [i_7]));
                            arr_33 [i_6] = 14898354815773882256;
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_29 &= (max(var_12, (((arr_35 [i_7] [i_8] [i_7]) % 1))));
                            arr_37 [i_6] [15] [i_6] [i_6] = max((((var_13 ? (arr_31 [i_6] [i_6] [i_6] [i_6] [i_6]) : var_2))), (max(119, (max(var_6, (arr_22 [i_7] [i_8]))))));
                            arr_38 [i_6] [0] [0] [0] [i_6] = (i_6 % 2 == 0) ? ((((((((!(arr_36 [i_6] [i_6] [i_8] [i_7] [i_6] [i_6])))) * (((arr_14 [i_6] [i_6]) % (arr_36 [i_6] [i_7] [i_7] [i_11] [i_6] [8]))))) - (((((((arr_4 [i_8]) < (arr_21 [0])))) <= (arr_6 [i_6]))))))) : ((((((((!(arr_36 [i_6] [i_6] [i_8] [i_7] [i_6] [i_6])))) * (((arr_14 [i_6] [i_6]) * (arr_36 [i_6] [i_7] [i_7] [i_11] [i_6] [8]))))) - (((((((arr_4 [i_8]) < (arr_21 [0])))) <= (arr_6 [i_6])))))));
                            arr_39 [i_7] [i_11] [i_8] [i_6] = ((+(((arr_31 [i_6] [i_7] [i_8] [i_9] [i_11]) ? (max(31130, 5)) : var_13))));
                            var_30 = ((((((-(arr_1 [i_6] [i_6]))) % var_8)) ^ (arr_29 [i_6] [i_6] [i_6] [i_8] [i_6] [i_8])));
                        }
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_31 = 14898354815773882257;
                            var_32 = 1793808725;
                            var_33 = (max(0, 13));
                        }
                        var_34 = (((arr_21 [i_9]) ? (arr_24 [i_6] [8] [i_8] [i_9]) : (arr_24 [i_9] [i_8] [i_6] [i_6])));
                    }
                }
            }
        }
        var_35 = ((~(arr_22 [i_6] [i_6])));
        var_36 ^= (arr_17 [i_6] [i_6] [i_6]);
        arr_42 [13] [i_6] = (((((arr_10 [i_6]) && (var_0 && var_1))) ? (max(1793808725, 17)) : var_8));
    }
    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
    {
        var_37 = (!1);
        arr_45 [i_13] = (!(arr_1 [i_13] [2]));
        var_38 = (max(var_38, (arr_12 [1])));
    }
    #pragma endscop
}
