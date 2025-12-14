/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (min((-1 & 7), ((-2978721409066676927 % (var_4 && var_10)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (max(var_12, ((min((((~(max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))), ((-((2978721409066676927 ? (arr_0 [i_0] [5]) : (arr_1 [i_0] [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (((arr_3 [i_0]) - (min(-71, 5584148516309499853))));
                    var_14 = (min(var_14, (((257554973 ? 129 : 1097364144128)))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_9 [i_3] = ((((arr_8 [16]) ? ((~(arr_6 [i_3]))) : -7463712227685182055)));
        var_15 *= (arr_7 [6]);
        arr_10 [i_3] = ((((min((!-6218026679769009627), (((arr_8 [i_3]) ? (arr_7 [i_3]) : 0))))) ? ((-(((arr_7 [i_3]) + -1)))) : (arr_7 [i_3])));

        /* vectorizable */
        for (int i_4 = 4; i_4 < 21;i_4 += 1)
        {
            var_16 = ((1003951868 ? 0 : -2978721409066676927));
            var_17 = (arr_12 [i_4] [i_3] [i_3]);

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_18 = (arr_8 [i_4 - 4]);
                var_19 = ((2040 ? 6 : 255));
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_20 = ((-(arr_18 [i_3] [i_3] [i_3] [i_7])));
                        arr_21 [i_3] [i_4] [i_6] [i_7] = ((((arr_8 [i_3]) ? (arr_18 [i_3] [i_3] [i_6] [i_7]) : (arr_12 [i_6] [i_4] [i_3]))));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            arr_26 [i_3] [i_3] = (min((arr_13 [i_3]), (((((((arr_15 [i_8] [i_8] [i_8] [i_3]) ? 2147483647 : -2978721409066676927))) ? (arr_19 [i_3] [i_3] [i_3] [i_8]) : ((min(30010, (arr_23 [i_3] [i_3] [i_8])))))))));
            arr_27 [i_3] [i_3] = (arr_8 [i_8]);
            var_21 = ((min((arr_15 [i_8] [i_3] [i_3] [i_3]), ((min((arr_19 [i_3] [i_3] [i_3] [i_8]), (arr_8 [i_3])))))));
            arr_28 [i_3] = ((((arr_17 [i_3] [i_3] [i_8]) ? 64 : 32767)));
            var_22 = (arr_14 [i_3] [i_3]);
        }
        var_23 = (min(var_23, 257554973));
    }

    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_24 = (arr_7 [22]);
        var_25 = (arr_17 [i_9] [i_9] [i_9]);
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    {
                        var_26 = 3099597889;
                        var_27 = (arr_13 [i_10]);
                        var_28 |= (min(71, 9007199187632128));
                        var_29 = (min(var_29, (((0 ? ((((((2005103200 ? 1729382256910270464 : 127))) && ((((arr_24 [i_10] [i_11] [i_12]) ? 255 : (arr_25 [i_11]))))))) : (arr_31 [i_10 - 1]))))));
                        arr_38 [i_9] [i_10] [i_10 - 1] [i_10] [i_11] [i_12] = (-(min(1550860735, (min(53353, -7955531638172994566)))));
                    }
                }
            }
        }
    }
    var_30 = var_4;
    #pragma endscop
}
