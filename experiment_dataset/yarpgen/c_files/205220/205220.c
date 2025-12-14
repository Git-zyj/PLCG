/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (arr_1 [3]);
        var_15 = ((((17574812999037408640 ? var_7 : ((min(var_1, 112))))) != -106));
        var_16 = 8594107029673965329;
        arr_4 [i_0] [i_0] = arr_0 [13];
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 4; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_17 = (var_4 % -1417386542);
                        var_18 = 127;
                    }
                }
            }
            var_19 &= ((-(arr_9 [i_2 + 1] [i_2 - 3] [i_2 - 4] [i_2 - 1])));
            arr_14 [i_1] [i_1] = var_11;
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_20 -= (arr_5 [i_5]);
            arr_17 [i_1] = ((var_9 % (((arr_1 [i_1]) ? var_13 : var_10))));
            var_21 = (min(var_21, var_10));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                arr_24 [i_1] [i_1] = arr_23 [i_1] [i_1] [i_1];
                var_22 = 207;
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_31 [i_1] [i_9 + 2] = (((arr_25 [i_7 + 1] [i_8 - 2] [i_8 - 2] [i_8]) == (arr_19 [i_8 - 1] [i_8 - 2] [i_8 - 2])));
                            var_23 = (arr_22 [i_6] [i_6]);
                        }
                    }
                }

                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    var_24 *= (~var_5);
                    var_25 = (((7700588347252632977 >> (121 - 87))));
                    var_26 = ((var_8 / (arr_29 [i_1] [i_6] [i_6] [i_1])));
                }
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_27 = ((~((~(arr_5 [i_6])))));
                var_28 = (min(var_28, ((((arr_22 [i_11] [i_6]) ? 30720 : var_10)))));
            }
            var_29 = -105;
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    {
                        arr_42 [i_1] [i_1] = ((((2877580729 > (arr_7 [i_1]))) ? (((((arr_20 [i_1] [i_1] [i_1] [1]) ^ -45)) | 1009889502)) : (!-5294213255814651724)));
                        var_30 = (min(var_30, (((var_4 + ((-(arr_11 [i_1] [i_12] [4] [i_14]))))))));
                        arr_43 [i_1] [i_1] [i_13] [i_14] = ((((-(arr_25 [6] [i_12] [i_13] [7]))) % ((max(112, (arr_33 [i_1] [i_1] [i_12] [4] [4]))))));
                        var_31 -= (var_11 / 7663427811517209561);
                        arr_44 [i_1] [i_1] = ((~(var_2 - 4294967280)));
                    }
                }
            }
        }
    }
    var_32 = var_8;
    var_33 = (var_8 ? var_2 : var_12);
    #pragma endscop
}
