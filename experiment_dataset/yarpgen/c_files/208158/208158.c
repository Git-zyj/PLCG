/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_13 = -3099616987293621837;
            var_14 -= -4294967295;

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_15 = var_6;
                arr_7 [i_0] [i_0] [i_0] [5] = 17980;
                var_16 = (arr_6 [0] [i_1 + 1] [0]);
                var_17 = (arr_3 [i_2]);
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_18 = (arr_10 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [7] = ((arr_13 [i_0] [i_1 + 1] [i_1] [i_0] [i_1 + 4] [i_3]) ? 6107622178300201835 : (arr_13 [i_1] [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 3] [i_3]));
                            arr_18 [i_0] [i_0] [6] [9] [i_0] = 3597481248085074550;
                        }
                    }
                }
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_19 = (arr_1 [i_0]);
                var_20 = ((var_6 ? (arr_19 [i_0] [i_1 + 1]) : (arr_16 [i_1 + 1] [i_1])));
                var_21 = (((arr_2 [i_1 + 1]) ? (arr_10 [i_0] [i_0] [i_0]) : var_3));
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    arr_29 [i_0] = ((250 >> (((arr_21 [i_8] [i_0]) - 2066475215))));
                    var_22 += (arr_20 [i_8] [i_8] [i_7] [i_0]);
                    var_23 &= var_7;
                }
            }
        }
        var_24 = ((31 ? ((~(arr_19 [i_0] [4]))) : (arr_9 [i_0] [13] [1] [1])));
        var_25 = ((-(arr_14 [1] [1] [1] [i_0] [i_0] [1] [i_0])));
        var_26 = (arr_27 [i_0] [i_0] [15] [i_0]);
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            {
                                arr_44 [i_9] [11] [11] [9] [i_12] [i_13] = (arr_40 [i_13] [i_9] [i_11] [i_10] [i_9]);
                                var_27 = (min(var_27, (!4294967295)));
                                var_28 += (((((max((arr_33 [i_11]), var_8)))) | (((arr_39 [i_9] [i_10] [i_11] [i_12] [i_13]) ? (arr_39 [i_11] [i_11] [i_11] [i_11] [i_11]) : (arr_34 [i_10] [i_12] [i_13])))));
                            }
                        }
                    }
                    var_29 = var_10;
                }
            }
        }
        var_30 = ((((((var_6 ? (arr_30 [0]) : 25545)))) ? (((~(arr_39 [15] [17] [17] [i_9] [i_9])))) : ((((arr_41 [i_9] [i_9] [17] [i_9]) ? 1 : 25514)))));
        var_31 = ((~(((arr_38 [i_9] [i_9] [i_9] [i_9]) ^ 12339121895409349793))));
    }
    for (int i_14 = 0; i_14 < 12;i_14 += 1)
    {
        var_32 = (min(((((arr_3 [i_14]) & (arr_3 [i_14])))), (965276849 | 536870911)));
        var_33 = (min(var_33, ((((-69 + 2147483647) >> (4294967292 - 4294967267))))));
        var_34 = (((arr_41 [i_14] [2] [i_14] [i_14]) || 65408));
        var_35 = ((1109953911 ? ((((min((arr_12 [i_14] [i_14] [i_14] [i_14]), (arr_16 [i_14] [i_14])))) ? (((-8810 ? (arr_27 [i_14] [i_14] [i_14] [i_14]) : (arr_30 [i_14])))) : (max(var_2, (arr_25 [i_14] [i_14] [9] [9]))))) : ((((arr_30 [i_14]) ? var_3 : (((arr_45 [i_14] [3]) >> (3185013362 - 3185013355))))))));
    }
    #pragma endscop
}
