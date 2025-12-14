/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] [11] = ((-(arr_6 [i_0] [i_0])));
            arr_8 [i_0] [i_0] = -3493;
            arr_9 [i_0] [i_0] = (~var_2);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_10 = (min(var_10, (arr_13 [i_0] [i_0])));
            var_11 = (~var_3);
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_12 = (max(var_12, ((((((((arr_12 [i_0 - 1]) + 9223372036854775807)) << (((((arr_12 [i_0 + 2]) + 869280281578735683)) - 53))))) ? ((-3493 ? (arr_12 [i_0 + 2]) : (arr_12 [i_0 - 1]))) : var_0))));
            arr_16 [i_0] [i_3] [i_3] = (max(((29333 ? (arr_5 [i_0 - 1] [i_0]) : -3153999886826939882)), -8537827122851099536));
            arr_17 [i_0] = ((((var_9 ? (((arr_0 [i_0 + 1] [i_0]) ? (arr_15 [i_0] [i_3] [i_3]) : var_9)) : (!var_8)))) ? (arr_5 [i_0 + 2] [i_0]) : ((min((-6299841800954731600 || -3508), ((3493 >> (91 - 63)))))));
            var_13 *= (((((arr_0 [i_0] [10]) ? ((var_3 ? (arr_15 [8] [0] [8]) : var_3)) : (arr_14 [i_0 + 1]))) < (arr_3 [i_0 + 1] [i_0 - 1] [i_0])));
        }
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            var_14 = (min(var_14, (((((((-3502 ? (arr_4 [8] [i_0 + 2]) : var_1))) ? (!67) : (((!(arr_18 [i_0] [i_0]))))))))));
            var_15 = (min(var_15, var_9));
            var_16 = (((-(arr_5 [i_0 - 1] [i_0]))) / (((268435455 ? var_4 : (arr_11 [i_0])))));
            arr_21 [i_0] = ((3316179300435538505 ? var_1 : (((arr_1 [i_0] [i_0]) ? var_2 : (~-5019748904890929098)))));
        }
        arr_22 [i_0] = (~(max((max(8537827122851099536, 0)), ((var_3 ? 7933057994980904988 : var_1)))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    {
                        var_17 -= (max((((arr_28 [i_7 + 1] [i_7] [i_7] [4] [i_7]) >> (17179869183 - 17179869140))), (((arr_3 [i_7 + 2] [i_7 + 1] [i_0 - 1]) ? (arr_5 [i_0] [i_5]) : 16))));
                        arr_30 [4] [i_0] [i_6] [i_0] [i_6] = (min(((~(((arr_24 [i_6] [i_6]) ? var_8 : var_1)))), (~-1)));
                        arr_31 [i_0 - 1] [16] [5] [i_0] = -268435452;
                        arr_32 [i_0] [i_5] [i_0] [12] = ((((var_5 ? (arr_28 [i_0 + 1] [i_5] [i_6] [i_7] [i_7]) : (arr_15 [i_0] [i_0 + 1] [i_0])))) ? -7635934749116538017 : -20337);
                        var_18 = (max(var_18, (((var_6 ? ((((arr_20 [16] [i_5]) * var_6))) : (arr_5 [i_6] [i_5]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
    {
        arr_35 [i_8] = (arr_33 [i_8] [i_8]);
        var_19 *= var_5;
        arr_36 [i_8] = ((((arr_34 [i_8] [16]) ? -1431253863696250075 : (arr_33 [i_8] [i_8]))));
    }
    for (int i_9 = 2; i_9 < 17;i_9 += 1) /* same iter space */
    {
        var_20 *= ((((-(arr_33 [14] [i_9 - 1]))) ^ (((-3242075980517318016 <= var_1) ? (16231 - -3) : ((189 ? (arr_34 [i_9] [i_9]) : -1))))));
        var_21 = (max(var_21, (arr_33 [8] [i_9 - 2])));

        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            arr_41 [i_9] [i_10] = (arr_39 [i_9]);
            var_22 ^= 1431253863696250083;
        }
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 17;i_11 += 1) /* same iter space */
    {
        var_23 = ((((((arr_38 [17]) % var_1))) ? (((arr_38 [i_11]) ^ (arr_40 [12]))) : (arr_38 [i_11 - 2])));
        var_24 = (min(var_24, 31803));
        var_25 += ((~(arr_37 [i_11] [i_11 - 2])));
    }
    var_26 = ((-13 ? (min(((var_2 ? var_4 : var_3)), var_2)) : ((((max(-16556, -3502)))))));
    var_27 = (max(var_27, 7876711466621769895));
    #pragma endscop
}
