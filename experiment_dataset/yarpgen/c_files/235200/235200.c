/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 &= (-65 > 138);
        var_17 = (arr_2 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_18 = (max(var_18, 138));
                        var_19 = (min(var_19, (((((-1827200172 ? (arr_9 [i_0] [15] [15] [15]) : 63)) <= (arr_10 [i_0] [i_0] [i_1 - 2] [i_2 + 2] [i_2 + 1]))))));
                        var_20 = (max(var_20, 64));
                    }

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_21 = (max(var_21, (((2147483641 ? 2147483641 : ((16386628586576630502 ? (arr_15 [i_2] [i_0] [i_2] [i_4]) : (arr_9 [i_4] [i_2] [i_0] [i_0]))))))));
                        var_22 ^= ((-(((!(arr_9 [i_0] [i_1] [1] [1]))))));
                    }
                }
            }
        }
        var_23 = (min(var_23, (arr_5 [i_0] [i_0] [i_0])));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_24 = (!-1827200184);
        var_25 = (min(var_25, (!-2147483641)));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_26 = (arr_21 [i_5]);
                    var_27 = ((15915 ? (((arr_3 [i_6]) + (arr_3 [i_5]))) : ((min((arr_4 [i_6]), (arr_4 [i_5]))))));
                }
            }
        }
        var_28 *= ((((-15 ? 192 : (((arr_19 [i_5]) ? (arr_13 [1] [i_5] [i_5] [i_5]) : (arr_13 [i_5] [8] [i_5] [i_5]))))) ^ 31247));
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 12;i_8 += 1) /* same iter space */
    {
        var_29 *= (((arr_18 [i_8]) ? 15891 : 12));
        var_30 = (((arr_2 [i_8] [i_8 + 1]) ? (arr_2 [i_8] [i_8 - 4]) : 201));
    }
    for (int i_9 = 4; i_9 < 12;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                {
                    var_31 |= (max(((max((arr_25 [i_9]), (((56 > (arr_31 [i_10]))))))), (min(var_1, (arr_6 [i_9] [i_9] [i_9] [i_9])))));
                    var_32 = (((((~(arr_18 [i_9 - 1])))) ? -2147483646 : ((min((arr_13 [i_9] [i_9] [i_9 - 3] [i_9 - 3]), (min(42, 0)))))));
                    var_33 = (max(var_33, (!-1)));
                }
            }
        }
        var_34 = 208;
        arr_36 [i_9 - 3] = (arr_21 [i_9 - 1]);
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 9;i_13 += 1)
            {
                {
                    var_35 += var_11;
                    var_36 = (arr_38 [i_9 - 1]);
                    arr_41 [2] [2] [i_13] = (~179);
                }
            }
        }
    }
    var_37 *= (min((130 ^ var_6), var_8));
    var_38 = (~((min(var_12, (max(var_13, var_0))))));
    #pragma endscop
}
