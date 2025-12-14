/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = ((-(((arr_0 [i_0] [i_0]) + (arr_0 [20] [i_0])))));
        arr_2 [i_0] = var_10;
        var_15 = -var_9;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_16 = (((!var_6) ^ (arr_5 [i_1 - 1] [i_1 + 2])));

            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                var_17 += (((arr_4 [i_3 + 1]) == (arr_4 [i_3 + 2])));
                arr_10 [2] [5] [13] [i_3 - 1] = var_2;
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_18 = ((1 ? 65534 : 169));
                arr_14 [i_4] [i_4] [i_4] [i_4] = ((var_0 ? ((-(arr_8 [13] [i_2] [i_2] [i_1]))) : (((-103 + 2147483647) >> 1))));
                var_19 = (max(var_19, 9223372036854775807));
                var_20 = var_13;
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_21 |= (-70 + var_0);
                            var_22 -= ((102 ? 1 : -1));
                            var_23 = (min(var_23, (((var_10 | (arr_21 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))));
                            var_24 = ((arr_5 [i_5] [i_5]) ? var_11 : (arr_7 [i_1]));
                            var_25 = var_9;
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_26 = ((var_6 + (arr_19 [1] [1] [i_1 - 1] [i_1 - 1])));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {
                        var_27 = ((((((arr_25 [i_8] [1]) || (arr_12 [4] [4] [4])))) >> (3879759386675703844 - 3879759386675703827)));
                        arr_30 [16] [16] [i_8] [i_10] = ((arr_27 [i_8] [i_1 - 1] [i_1 - 1]) >= ((~(arr_26 [i_1] [13] [i_1] [i_1]))));
                    }
                }
            }
            arr_31 [12] [i_8] &= ((-1 ? (arr_15 [i_1 - 1] [i_1 - 1] [i_1]) : (arr_25 [12] [i_1 + 1])));
        }
        for (int i_11 = 1; i_11 < 1;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        {
                            arr_45 [9] [16] [9] [i_11] [i_11] [i_1] = var_5;
                            var_28 += (((1 < 4095) << (-13 + 37)));
                            arr_46 [i_1] [i_1] [i_1] [10] [i_1] [5] = ((~(arr_3 [i_11] [i_11])));
                            arr_47 [i_1] [i_1] [i_1] [11] [11] |= (1 ^ var_13);
                        }
                    }
                }
            }
            arr_48 [i_1] [i_11 - 1] &= var_10;
        }
        var_29 = 3;
        arr_49 [i_1] = ((var_5 % (arr_24 [4])));
    }
    var_30 = var_3;
    var_31 = 1;
    #pragma endscop
}
