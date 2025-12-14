/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_8));
    var_17 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_1]) : (arr_0 [i_0])));
            arr_7 [i_0] &= -var_4;
        }
        var_18 *= (3910962424 || 0);
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_19 -= var_7;
            arr_14 [i_2] [i_2] = (((((250 ? (0 > 0) : (arr_0 [i_3])))) ? (arr_13 [i_2] [i_3] [i_3]) : ((252 + (((arr_8 [i_2] [i_2]) ? var_9 : var_10))))));
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_20 = (max(var_2, (((!((((arr_11 [i_2] [i_5] [16]) >> (var_10 + 3460120907023808685)))))))));

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_25 [i_5] [i_5] &= 0;
                            arr_26 [i_4] [i_4] [7] [i_4] [i_4] = ((~((~(((arr_17 [i_2] [i_2] [i_6]) ? (arr_0 [4]) : var_0))))));
                            var_21 = (arr_15 [i_2]);
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_22 |= (min(-18, ((-9223372036854775802 / (arr_27 [i_6])))));
                            var_23 = (max(var_23, ((((((3 ? 32761 : 235))) ? (((-var_9 ^ ((32751 ? (arr_8 [i_2] [i_2]) : var_14))))) : (max(((9223372036854775802 ? 511 : 4445)), (arr_1 [i_8]))))))));
                        }
                        var_24 = -var_1;
                    }
                }
            }
        }
        var_25 &= ((6565877464851952756 ? 0 : 3910962424));
        arr_29 [i_2] = ((-((-26 - ((-1 ? 6 : 7565405776915193891))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_26 -= var_9;
        arr_32 [i_9] [i_9] = (((arr_16 [i_9] [i_9]) ? (arr_22 [i_9] [i_9] [i_9] [i_9]) : (arr_16 [i_9] [i_9])));
    }
    #pragma endscop
}
