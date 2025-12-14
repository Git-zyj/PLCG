/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = 0;
        var_16 ^= (min((((var_1 != var_10) ? var_15 : 64989)), ((max((arr_2 [i_0] [i_0]), (arr_1 [6]))))));
        arr_5 [1] = (((max(3267263980, var_2))) ? ((var_7 ? (!2025657217) : (arr_0 [i_0] [i_0]))) : (((1 - (-127 - 1)))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] = ((max(1, 3110924155)) | 1);
                            var_17 = var_0;
                            arr_17 [i_0] [i_2] [4] [i_0] [i_4] = max(((((((arr_6 [i_1]) % var_13))) ? 30 : (((-127 - 1) * 1829606881)))), ((((37 << (var_14 - 3715884079))))));
                            var_18 = (((((-33 ? var_13 : ((((var_1 + 2147483647) << var_4)))))) ? 120 : ((var_5 & (~48)))));
                        }
                    }
                }
            }
            arr_18 [i_0] [i_0] [i_0] = ((-((1 * (((1 == (arr_12 [i_0]))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_21 [i_5] [i_0] [i_0] = (((((560 ? 3152153622 : -56))) ? 32 : (!-56)));
            var_19 = ((var_6 ? (arr_3 [i_5] [i_5]) : (arr_3 [i_5] [i_0])));

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_24 [i_6] [i_6] = 4294967295;
                arr_25 [i_6] [i_6] = 15872;
            }
            var_20 ^= ((((arr_2 [i_0] [i_0]) ? 1 : var_10)));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_21 = (!((((((8 ? 1 : 2303007015))) ? 103 : (arr_7 [i_0] [i_7] [i_7])))));
            var_22 ^= (2547946504 ? 3906871163 : -28);
            var_23 = (arr_9 [i_7] [0] [0] [i_0]);
        }
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_32 [i_8] = ((+(((arr_23 [i_8] [i_8] [i_8]) ? var_10 : (arr_28 [i_8] [12] [i_8])))));
        arr_33 [i_8] = 4294967283;
        arr_34 [i_8] [i_8] = 0;
    }
    var_24 = ((var_0 ? (~var_8) : var_1));
    #pragma endscop
}
