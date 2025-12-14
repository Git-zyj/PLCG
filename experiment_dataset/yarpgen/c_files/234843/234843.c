/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = arr_0 [14];

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_16 = var_5;
            var_17 = ((-(arr_1 [i_0])));
            arr_5 [i_0] [5] [i_1] = (((var_3 ? var_6 : var_1)));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_8 [i_2] [0] [i_2] = ((((-13654 ? 0 : 7)) | (~0)));

            for (int i_3 = 4; i_3 < 15;i_3 += 1)
            {
                arr_13 [i_3 - 3] [i_2] [i_0] = ((!(arr_12 [i_3 + 3] [i_3 + 3] [i_2])));
                arr_14 [i_0] [i_0] [i_2] [i_3 - 1] = ((-(arr_1 [i_3 - 4])));
                var_18 = (((var_5 % var_6) ^ (arr_4 [i_0])));
            }
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                arr_18 [i_2] [i_2] [i_2] [0] = (!60831);
                var_19 = (((arr_7 [i_4 + 1]) & -88));
            }
            var_20 = arr_10 [i_0] [17] [3];
            arr_19 [13] [i_2] = ((var_4 ? (arr_11 [7] [7] [i_0]) : (arr_3 [i_0] [i_2] [i_2])));

            for (int i_5 = 3; i_5 < 15;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_30 [i_2] [i_2] [i_2] [3] [i_7] [3] [i_7] = 243;
                            arr_31 [i_7] [i_2] [i_7] [i_2] [i_2] [7] [0] = ((~(arr_23 [i_2] [3] [i_2] [i_7])));
                        }
                    }
                }
                arr_32 [i_0] [12] [i_2] [14] = -var_9;
            }
            for (int i_8 = 3; i_8 < 15;i_8 += 1) /* same iter space */
            {
                var_21 = (max(var_21, (arr_22 [i_2])));
                arr_36 [11] [i_2] [0] = 27;
                arr_37 [3] [3] [i_2] = ((var_10 & ((var_13 & (arr_24 [i_0] [12] [i_2] [13])))));
            }
        }
        var_22 = ((4 ? 4251529652161942228 : 16384));
        arr_38 [13] = ((29420 ? (arr_20 [i_0] [i_0] [i_0]) : (arr_20 [i_0] [i_0] [i_0])));
        arr_39 [i_0] = (((~16394) <= 7183));
    }
    for (int i_9 = 1; i_9 < 20;i_9 += 1)
    {
        var_23 = ((-216 ? (var_8 <= 88) : (max((min(var_4, 0)), (((6 ? var_5 : var_3)))))));
        arr_42 [i_9 + 1] = (((min(24059, (arr_41 [i_9 - 1] [i_9 + 1])))));
        var_24 = (arr_40 [i_9]);
    }
    var_25 = (((((((min(-7184, 92))) == 16391))) & 29416));
    var_26 = var_2;
    #pragma endscop
}
