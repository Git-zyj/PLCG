/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = (max(var_13, (((+(((!7) ? var_1 : ((var_1 ? var_8 : var_1)))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_14 += arr_0 [i_0 + 1];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (arr_6 [i_0 + 2] [i_2] [i_0 + 2] [i_0 + 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = 15696;
                                var_17 = (max(var_17, (arr_10 [i_1] [i_1] [i_1] [i_1])));
                                var_18 = (min(var_18, (((arr_10 [i_2] [i_3 - 1] [i_4] [i_4 + 1]) ? (arr_10 [i_3] [i_3 - 1] [i_3 - 1] [i_4 - 1]) : (arr_10 [i_1] [i_3 - 1] [i_1] [i_4 - 2])))));
                                var_19 = (~163);
                            }
                        }
                    }
                }
            }
        }
        var_20 = (max(var_20, ((-268435455 ? -1960480077 : (((arr_10 [i_0] [i_0] [i_0 + 2] [i_0]) ? 0 : (arr_3 [4] [4] [i_0])))))));
        var_21 ^= (arr_1 [0]);
    }
    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        var_22 = 59587;
        var_23 = ((!(max((arr_14 [i_5 - 3] [i_5 - 3]), (arr_14 [i_5 - 2] [i_5 + 1])))));
        var_24 = (((-((min(2047, 38))))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_25 ^= max(8795958804480, 2047);
        var_26 = ((((-(arr_15 [i_6])))) ? (((arr_15 [i_6]) ? (arr_16 [10]) : (arr_19 [i_6]))) : ((((arr_15 [i_6]) ? (arr_16 [i_6]) : (arr_15 [i_6])))));
        var_27 = (min(var_27, ((max(((~(arr_17 [7] [11]))), -13981)))));
        var_28 = (max(((min(-5948, (arr_14 [i_6] [i_6])))), ((+((32246 ? (arr_18 [i_6]) : (arr_14 [i_6] [i_6])))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_29 += 133;

        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_30 = ((5949 ? (arr_24 [i_7]) : (arr_24 [i_7])));
            arr_27 [i_7] [i_7] = (arr_24 [i_7]);
        }
        var_31 *= (arr_16 [i_7]);
        arr_28 [i_7] = (((((3506449238 ? 0 : 0))) ? (-32767 - 1) : ((8916899652920170829 ? 32651 : 0))));
    }
    var_32 = (max(var_32, (((7314510448560551504 ? -17730 : 0)))));
    var_33 -= (max(1, ((((min(184, var_11))) ? var_2 : var_4))));
    #pragma endscop
}
