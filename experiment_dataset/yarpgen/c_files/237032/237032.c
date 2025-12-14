/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((max(-28672, ((max(var_8, var_8))))));
    var_17 = var_3;

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 2] = (((((-1331002092 & 1331002092) ? (((arr_1 [i_0]) ^ -1331002083)) : (arr_1 [i_0]))) & (arr_0 [i_0 - 1])));
        arr_3 [i_0] = -1331002075;
        var_18 = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (max((((1331002074 * (min(0, 599136214))))), 997444037030557437));
        arr_7 [i_1] = ((~(~0)));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_10 [i_2] = ((~(((((arr_0 [i_2]) + 2147483647)) << (7366 - 7366)))));

        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_21 [5] [i_3 + 1] [i_4 + 1] [10] [i_2] = 3695831065;
                            var_19 -= (min((arr_11 [i_3 + 1] [i_3 - 1]), 3695831080));
                            arr_22 [i_2] [i_2] [i_2] [i_2] = var_14;
                            var_20 = (((!((((arr_17 [i_2] [i_3]) ? 1 : (arr_17 [i_2] [i_3 + 2])))))) ? (arr_13 [i_6] [i_3] [9]) : ((((((var_0 & (arr_4 [i_2] [13])))) < (arr_19 [i_2] [9] [i_4] [i_5 - 3] [6])))));
                            arr_23 [i_2] [i_3] [i_4] = (min((arr_0 [i_2]), (arr_15 [i_2] [i_2] [i_4 - 1] [i_5])));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                arr_26 [i_2] [i_3 - 1] [i_2] [i_2] = var_11;
                arr_27 [2] [i_2] [i_7 + 1] = ((~(arr_20 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1])));
                var_21 = 0;
            }
            /* vectorizable */
            for (int i_8 = 2; i_8 < 12;i_8 += 1)
            {
                arr_31 [i_2] [i_8] [i_8] |= 87;
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_22 = (((arr_33 [3] [7] [i_2] [i_3 - 1]) - (((arr_20 [i_2] [i_3 + 1] [14] [i_3 + 1] [i_10]) ? 1331002075 : var_11))));
                            var_23 = (max(var_23, (arr_19 [i_2] [i_3 + 1] [i_3 + 1] [i_9] [i_3 + 1])));
                            arr_37 [6] [0] [i_2] [i_10 - 1] = (((var_6 + (arr_33 [i_2] [i_2] [i_2] [i_2]))));
                        }
                    }
                }
            }
            for (int i_11 = 4; i_11 < 13;i_11 += 1)
            {

                /* vectorizable */
                for (int i_12 = 2; i_12 < 11;i_12 += 1)
                {
                    var_24 = (min(var_24, (arr_35 [i_11 - 3] [i_11 - 2] [i_11 + 1] [i_11 + 1] [i_11 - 2])));
                    arr_42 [i_2] [i_2] [i_11] [i_2] = 1;
                }
                var_25 ^= (arr_5 [i_11]);
            }
        }
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            var_26 = ((arr_11 [i_2] [i_2]) ? (!577481162) : ((+(max((arr_5 [i_2]), -1331002092)))));
            var_27 = (max(((max((arr_15 [i_2] [i_2] [10] [i_2]), (65534 - var_13)))), (arr_29 [i_2])));
            arr_45 [i_2] [i_13] [i_13] = (max((~1362956716), 65519));
        }
    }
    var_28 = ((max(var_6, (max(4206488619, var_11)))));
    #pragma endscop
}
