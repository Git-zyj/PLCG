/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_13 ? (min(var_2, var_0)) : (var_11 == var_7))) <= 0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = (255 * 0);
            var_16 = (arr_1 [i_0]);
            var_17 = (((arr_1 [i_0]) + (((11945999293332836801 ? 255 : 34267)))));
        }
        for (int i_2 = 4; i_2 < 17;i_2 += 1)
        {
            var_18 = (arr_6 [i_2] [i_2]);
            var_19 = (max(var_19, var_6));
        }
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            arr_11 [14] [i_3] [i_0] &= ((-(arr_6 [i_0] [i_3 - 1])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_18 [1] [i_3] [i_4] [i_4] |= var_1;
                        var_20 ^= (((((~(arr_6 [i_0] [i_3])))) ^ (var_12 & 0)));
                        arr_19 [i_3] [i_3] [i_3] [17] = ((!(((34267 >> (var_9 - 504301282))))));
                    }
                }
            }
            var_21 *= (var_2 * 0);
        }
        arr_20 [i_0] [i_0] = (arr_13 [i_0] [i_0] [i_0] [8]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_22 = var_0;
            arr_26 [i_6] [i_7] = (arr_1 [i_7]);
            var_23 = (arr_13 [i_7] [i_7] [i_7] [i_7]);
        }
        for (int i_8 = 3; i_8 < 15;i_8 += 1)
        {
            arr_29 [i_8] [i_8 - 1] = ((((((var_4 * (arr_27 [i_6] [i_8] [i_8 + 1]))) + 2147483647)) >> (var_5 - 12273124863883834362)));
            var_24 = (((arr_15 [i_8] [i_8 - 3] [i_8]) != -4294967295));
            arr_30 [i_6] [4] [i_8] = (((arr_7 [i_8 + 4] [1] [i_8]) ? (arr_7 [i_8 + 4] [i_8] [i_8]) : var_2));
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            var_25 = ((var_2 ? (arr_33 [i_6] [i_6] [i_6]) : (arr_5 [i_6] [i_6] [i_6])));
            arr_34 [i_9] = var_8;
            var_26 = (min(var_26, var_13));
            var_27 = ((!(arr_25 [15] [i_9] [i_9])));
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            var_28 = (((arr_6 [i_10] [i_10]) <= (arr_6 [i_10] [i_10])));
            arr_37 [i_6] [i_10] [i_10] = (arr_21 [i_10]);
        }
        var_29 = (max(var_29, (arr_2 [i_6])));
        arr_38 [i_6] = (((((~(arr_10 [i_6])))) != (~-14)));
        arr_39 [i_6] [i_6] = (((((~(arr_2 [i_6])))) != -72057594036879360));
    }
    #pragma endscop
}
