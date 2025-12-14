/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (max(var_13, (((6256698690609694251 ? 1906102150561212209 : 0)))));
        var_14 &= (((arr_1 [i_0]) ? var_0 : (arr_1 [i_0])));
        var_15 *= ((15246996039119464163 ? -137253099 : -1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] |= (arr_2 [i_1]);
        var_16 += (((((52542 ? 1906102150561212230 : -1073741824))) ? -1906102150561212231 : ((-1 ? 1906102150561212230 : (arr_3 [2])))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] = (min(((min((arr_9 [i_2]), (arr_9 [i_2])))), (((arr_1 [i_2]) ? (arr_1 [i_2]) : var_1))));
        arr_13 [i_2] [i_2] = (((arr_10 [i_2]) / (min(var_5, (arr_10 [i_2])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_17 [2] |= ((((var_6 || (arr_16 [8]))) ? (((var_11 ? (arr_10 [i_3]) : (arr_0 [i_3] [i_3])))) : (arr_4 [6] [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_17 = ((4584681219846127964 ? var_3 : (arr_3 [i_4])));
                    var_18 = var_0;
                    var_19 = (((arr_14 [i_3]) ? var_1 : (arr_19 [i_4])));
                    var_20 = ((var_12 ? var_9 : (arr_0 [i_4] [i_3])));
                }
            }
        }
        var_21 = ((var_9 ? ((var_9 ? (arr_2 [i_3]) : (arr_3 [i_3]))) : (arr_10 [i_3])));

        for (int i_6 = 2; i_6 < 7;i_6 += 1)
        {
            var_22 = (arr_8 [i_3]);
            var_23 = (((6597069766656 - 97) % ((var_3 ? var_12 : (arr_4 [8] [8])))));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_24 += -1;

            for (int i_8 = 1; i_8 < 6;i_8 += 1)
            {
                var_25 = (min(var_25, 1906102150561212209));
                arr_29 [i_3] [i_3] [i_3] [i_7] = (((arr_24 [i_8 + 2] [i_3] [i_8 + 1]) ? -var_7 : (arr_5 [i_8 + 3])));
            }
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            arr_33 [i_3] [0] [0] &= ((arr_20 [i_9] [i_9] [8] [i_3]) % (arr_20 [7] [i_3] [i_3] [i_3]));
            var_26 = (((arr_14 [i_3]) ? 14737963387918341694 : 17));
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 0;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            {
                                var_27 ^= ((~(min((arr_39 [6] [i_14] [i_10]), (((var_11 ? (arr_35 [i_10]) : (arr_35 [i_11 - 2]))))))));
                                var_28 = (max(var_28, (97 * 0)));
                            }
                        }
                    }
                    var_29 = (arr_43 [11] [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_12] [i_11 + 2]);
                }
            }
        }
    }
    var_30 -= (min((((var_7 | var_11) ? (~-119) : (min(var_1, var_4)))), var_0));
    var_31 = (~(min(((var_5 ? 1906102150561212211 : var_12)), (var_3 & var_3))));
    #pragma endscop
}
