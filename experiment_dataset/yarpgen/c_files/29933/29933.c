/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -8991832764679659455;
    var_16 = ((var_8 % (((~(var_8 > var_11))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0]) ? (arr_1 [i_0] [7]) : (arr_1 [i_0] [i_0])));
        var_17 = (min(var_17, ((5359947314912806933 ? (arr_2 [i_0]) : var_5))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 -= (((~-1) ? var_0 : ((-1 ? 22172 : var_2))));
                                var_19 = (min(var_19, ((((arr_11 [i_4 + 1] [i_3] [i_4] [10] [i_3] [i_3 + 1] [i_3 + 1]) ? (arr_11 [i_0] [9] [i_0] [i_1] [i_2] [i_3] [i_4]) : (((arr_5 [i_3] [i_1] [15]) % var_9)))))));
                                var_20 = (max(var_20, 5359947314912806933));
                                var_21 ^= (((arr_1 [i_4 - 1] [i_2]) | -1));
                                arr_14 [4] [i_1] [i_1] [i_2] [i_2] [i_3 - 1] [7] &= -var_11;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_22 = ((!(arr_12 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_2] [i_1])));
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = ((arr_19 [i_0] [i_5 + 2] [i_2] [i_5] [i_6] [i_6]) + var_9);
                                var_23 = (max(var_23, (((672593354 << (-870510441 + 870510449))))));
                            }
                        }
                    }
                    arr_23 [i_0] [4] [4] = 5359947314912806924;
                    arr_24 [i_1] = var_7;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {
                {
                    var_24 = (arr_1 [i_8 + 1] [i_0]);
                    var_25 = (min(var_25, ((((arr_17 [i_8 - 1]) ^ 1)))));
                    arr_29 [i_0] [i_8] = 43;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {
                        var_26 = (max(var_26, (((((var_0 << (((arr_30 [i_9] [13]) - 290050937)))) / var_10)))));
                        var_27 = (arr_35 [i_10 - 2] [i_0] [i_0] [i_0]);
                        var_28 = (min(var_28, 1));
                        var_29 &= (53285 << 15);
                        var_30 = (arr_27 [i_10 - 1] [i_10 - 2] [i_9]);
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        var_31 = (max(var_31, (((((((arr_39 [i_12] [i_12]) >> (((arr_39 [i_12] [i_12]) - 83267978))))) ? (((arr_39 [i_12] [i_12]) ^ (arr_39 [i_12] [i_12]))) : (((arr_40 [i_12] [i_12]) + (arr_39 [i_12] [i_12]))))))));
        arr_41 [i_12] = ((8983611918196820593 ? (max((arr_40 [i_12] [i_12]), (arr_39 [i_12] [i_12]))) : (min((arr_39 [i_12] [i_12]), (arr_40 [i_12] [i_12])))));
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        arr_45 [16] = ((((((arr_42 [i_13] [i_13]) ? (arr_39 [i_13] [i_13]) : var_13))) ? (-98 & 870510440) : var_9));

        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            var_32 = (max(var_5, var_2));
            arr_48 [i_14] = (((max((((-3 + 2147483647) >> (23594 - 23576))), ((min(1, (arr_40 [i_13] [i_13])))))) != 16126));
            var_33 = (max(var_33, ((((((!(((240 ? var_6 : var_1)))))) >> (-1420939347 + 1420939368))))));
        }
    }
    var_34 = var_13;
    #pragma endscop
}
