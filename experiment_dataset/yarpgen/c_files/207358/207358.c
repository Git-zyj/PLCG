/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (min(26194, 65535));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = 65535;
        var_18 = ((~(arr_0 [i_0])));
        var_19 = ((+(((arr_2 [i_0]) ? -9940 : (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 ^= (~4294967294);
        var_21 = ((65535 ? (arr_4 [i_1]) : 157));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            {
                var_22 = ((~(min(-1194, (min(4294967295, 1309843380))))));

                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    var_23 = var_0;
                    var_24 ^= 65535;
                    var_25 = ((-(arr_1 [i_3])));
                }
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    var_26 = ((((((8384512 ? 148 : -605803224)))) ? 99 : -var_9));

                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            var_27 = (arr_6 [i_3] [i_6 - 1]);
                            var_28 = (max(var_28, ((((arr_9 [i_5 - 1] [i_5] [i_6 - 1]) ? (arr_11 [i_5 - 1] [i_6] [i_6 - 1] [i_6 + 1]) : (arr_11 [i_5 - 1] [i_6 - 1] [i_6 + 1] [i_6]))))));
                            var_29 = var_10;
                        }
                        var_30 = (((((9 ? 3 : 3660716795))) && -var_13));
                        var_31 = -200;
                    }

                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_32 = (max(var_32, -105));
                        var_33 = 59341;
                        var_34 = ((((arr_15 [i_5 - 1] [i_5] [i_5] [i_5]) ? 1 : 122)) + (((arr_10 [i_2] [i_2] [i_2]) ? (arr_17 [i_2] [i_2] [i_2] [10] [i_2]) : (!2041262163))));
                    }
                }
                var_35 -= (((!((min(1, var_6))))));
            }
        }
    }
    var_36 = (((-2147483647 - 1) + var_13));
    var_37 *= (((((~(min(var_9, var_10))))) ? (((-7832763918761544765 ? var_2 : var_5))) : var_13));
    #pragma endscop
}
