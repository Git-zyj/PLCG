/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        var_20 = -32767;
        var_21 -= ((-(arr_0 [i_0])));
        var_22 -= (((arr_1 [8]) % var_13));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_23 &= arr_5 [i_2];
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_24 -= (((arr_9 [i_1] [i_2] [i_3] [i_4]) >= var_2));
                        var_25 -= ((-12602 && (arr_7 [i_3] [i_2])));
                    }
                }
            }
            var_26 *= ((!(arr_7 [6] [6])));
            var_27 = 24;
            arr_14 [i_1] [i_1] = var_17;
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_17 [1] [i_1] = ((~(arr_7 [i_1] [i_1])));
            var_28 = 232;

            /* vectorizable */
            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
            {
                var_29 = (max(var_29, var_9));
                var_30 -= (((!var_6) / ((var_3 << (((arr_12 [i_1] [i_1]) - 63))))));
                var_31 = (~var_14);
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
            {
                var_32 -= (arr_13 [i_1] [i_1] [i_1] [i_1]);
                arr_24 [i_7] [i_7] [i_7] |= ((!(arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                var_33 += var_3;
                arr_25 [i_1] [i_1] [i_1] = ((-8091 > (((arr_5 [i_5]) & (arr_5 [i_7])))));
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
            {
                var_34 = ((((min((((arr_20 [i_1] [i_5] [i_1] [i_1]) ? (arr_11 [i_8] [i_5] [i_8] [i_8] [11] [i_1]) : var_15)), (arr_3 [i_1])))) && -68));
                var_35 += (arr_20 [i_1] [i_1] [i_5] [i_8]);
                var_36 ^= -8328260419324881091;
                var_37 = (min(var_37, (arr_8 [i_8] [i_8] [i_1])));
            }
        }
        var_38 = (arr_5 [i_1]);
        arr_29 [i_1] = (min(127, (((arr_18 [i_1] [i_1] [i_1]) - 0))));
        var_39 *= arr_20 [i_1] [i_1] [i_1] [10];
        var_40 = (min(var_40, -20252));
    }
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                {
                    var_41 |= (((((arr_34 [i_9] [i_9] [i_9 + 2]) ? var_9 : 19139)) - (((((arr_33 [i_9] [i_9 - 1]) == 89))))));
                    var_42 *= arr_31 [i_10];
                    var_43 = ((~((min((arr_36 [i_9 + 3] [i_10] [i_11] [i_9 + 3]), (arr_36 [i_9 - 1] [i_10] [i_11] [i_10]))))));
                }
            }
        }
    }
    #pragma endscop
}
