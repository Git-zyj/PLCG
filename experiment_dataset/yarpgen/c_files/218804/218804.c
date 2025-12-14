/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_17));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 += var_17;
                arr_5 [i_0] [i_1] [i_1] = (max(((~(arr_0 [i_0 + 1]))), ((((arr_0 [i_0 + 1]) >= (arr_0 [i_0 + 1]))))));
                var_21 = -3490103927705020250;
                arr_6 [i_0] [i_0] [i_1] = ((-1340270877 | (arr_1 [i_1])));
                arr_7 [i_0] [i_0] [8] = (arr_4 [i_0] [i_0]);
            }
        }
    }
    var_22 = (max((((var_17 ? 17 : var_16))), var_14));
    var_23 = 3604021510320426170;

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_18 [9] [i_3] = (min((max((arr_12 [i_2] [i_3 + 2] [i_2]), ((8160 ? (arr_15 [i_2] [i_2] [i_2] [i_2]) : (arr_12 [i_2] [i_3] [i_4]))))), (arr_8 [i_4])));
                    var_24 = (min(245, (min(var_14, (arr_17 [1] [i_3 + 1] [i_4])))));
                    arr_19 [i_4] [i_3] = (min((arr_11 [i_4] [i_3] [i_2]), (((arr_8 [i_4]) % ((~(arr_16 [i_4] [i_4])))))));
                }
            }
        }

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_25 = (arr_9 [i_2]);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_26 = (min((((((arr_15 [i_2] [i_5] [i_7] [i_8]) ^ (arr_20 [i_5] [i_6] [i_7]))) ^ 1920)), var_2));
                            var_27 = (min((max(4, (arr_24 [i_2] [i_2]))), (arr_24 [i_5] [i_7])));
                            var_28 = (arr_30 [i_5] [i_7]);
                        }
                    }
                }
            }
            arr_31 [i_2] [i_5] [i_2] = ((-(arr_20 [i_2] [i_2] [i_2])));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            arr_40 [i_11] [i_9] [i_9] [i_10] [13] = (arr_21 [i_2] [i_2] [i_2]);
                            arr_41 [i_9] [i_5] [i_9] = min(((max((arr_24 [i_5] [i_2]), -2147483647))), (max(((min(32767, var_5))), ((1380896383 ? 12319696357466102758 : 2147483647)))));
                            var_29 = (max(var_29, (305990328502307569 != 531581887)));
                        }
                    }
                }
            }
            arr_42 [i_2] = var_2;
        }
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    {

                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            var_30 = (arr_25 [i_14]);
                            var_31 = (arr_37 [i_15] [i_2] [i_12 + 2]);
                        }
                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            arr_58 [i_2] [i_2] [i_13] [9] [7] = (min((arr_56 [i_2] [i_2] [i_2] [i_2] [i_2]), (((arr_38 [i_2] [i_13] [i_12 + 1] [i_12 - 1] [i_2]) / (arr_16 [i_12 + 2] [i_2])))));
                            var_32 += (((arr_39 [i_12] [i_13] [i_12 + 3] [i_12 + 2] [i_12] [i_12 - 1]) ? (arr_39 [i_12] [i_13] [i_12 + 1] [i_12 - 1] [i_12] [i_12 + 3]) : (((arr_39 [i_2] [i_13] [i_12 + 2] [i_12 + 1] [i_12 + 1] [i_12 - 1]) << (((-32767 - 1) + 32773))))));
                            var_33 = arr_44 [i_2] [i_2];
                        }
                        var_34 += ((0 + ((((((arr_34 [i_2] [i_2] [i_2]) ? var_17 : (arr_25 [i_12])))) ? (((min((arr_16 [i_2] [i_12]), 32767)))) : (arr_50 [i_14] [i_12] [i_13] [i_13] [i_14])))));
                    }
                }
            }
            arr_59 [i_2] [i_12] [i_2] = (((((~((57927 >> (7627 - 7617))))) + 2147483647)) << (((((arr_21 [i_12 + 2] [i_12 + 1] [i_12 + 1]) ^ (((var_2 + 2147483647) >> (((arr_11 [i_2] [i_2] [i_2]) + 18869)))))) - 19114)));
        }
        var_35 = arr_37 [i_2] [i_2] [i_2];
        var_36 += min(((-(arr_37 [i_2] [i_2] [i_2]))), (arr_45 [i_2] [i_2] [i_2]));
        arr_60 [i_2] = (((((1609060680 ? (((~(arr_33 [i_2] [i_2] [i_2])))) : 9223372036854775807))) ? (arr_11 [i_2] [i_2] [i_2]) : (arr_43 [i_2] [i_2] [i_2])));
    }
    #pragma endscop
}
