/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (min(((1420331932 ? (arr_0 [i_0] [i_0]) : 3161650605)), (arr_0 [i_0] [21])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, (~6144)));
                        var_17 = (arr_6 [i_0] [i_0] [i_0] [i_0]);
                        var_18 = ((((var_15 <= (arr_10 [16] [16] [i_3 - 2] [i_3]))) ? ((var_6 ? (arr_9 [i_0] [i_1] [i_3 + 1] [i_3] [i_3]) : 1)) : (((-7097337824983711190 ? (arr_10 [i_0] [i_1] [i_3 - 3] [i_3 - 2]) : 1)))));
                        var_19 -= (((((-7767 ? ((((arr_9 [i_3] [11] [i_2] [i_3] [i_3]) ? var_8 : 351581873))) : var_0))) ? var_8 : ((((0 - 6144) ? ((min(59381, var_1))) : var_1)))));
                        arr_11 [i_2] [i_1] [i_2] [i_2] [16] [i_3] = 6154;
                    }
                }
            }
        }
    }
    var_20 = ((1 ^ ((1 ? var_6 : -3279))));

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_15 [i_4] = ((1 ? (arr_12 [i_4]) : (arr_14 [i_4] [i_4])));
        arr_16 [i_4] [18] = (max((((1 | -1104457174) ? (((arr_12 [i_4]) ? (arr_13 [i_4]) : -59)) : ((max(0, 2110033569))))), ((((~8660898905712735662) >= -6)))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_19 [i_5] = ((((-55580981 && ((max(59391, 9223372036854775806)))))));

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_21 += var_12;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_31 [i_5] [i_5] = ((31 / (arr_29 [i_5] [6])));
                        arr_32 [i_5] [i_6] [i_6] [i_5] = (min((min(var_15, (arr_22 [i_6] [i_5] [i_8]))), (arr_22 [i_5] [i_5] [i_5])));
                        var_22 = (arr_7 [2] [i_6]);
                        arr_33 [1] [i_5] = (((var_1 && var_5) ? (((arr_18 [i_6]) >> var_6)) : (arr_23 [i_5] [i_5])));
                    }
                }
            }
            var_23 -= ((((min((-46195369 & 1432), -9223372036854775799))) && var_4));
            var_24 ^= ((((((var_1 <= (arr_1 [i_5] [i_6]))))) ? (min((max(2318220766, var_13)), -60)) : (((+(((-9223372036854775807 - 1) ? -15087 : var_4)))))));
            arr_34 [i_5] = (((arr_10 [i_6] [i_6] [i_6] [i_5]) ? (min((arr_3 [12]), (arr_3 [i_5]))) : ((~(arr_5 [i_5] [i_6] [i_5])))));
        }
        for (int i_9 = 2; i_9 < 17;i_9 += 1)
        {
            arr_37 [i_5] = (!var_3);
            var_25 = -55580981;
            var_26 = (min((!var_12), ((164 > (~3943385422)))));
            arr_38 [i_5] = ((-(var_14 > -55580981)));
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    {
                        arr_50 [i_5] [14] [7] = (arr_23 [i_5] [i_5]);
                        arr_51 [i_5] [i_5] [i_10] [i_5] [i_5] [i_5] = (min((((((((var_9 + 2147483647) >> (((arr_25 [i_10] [i_10] [i_5]) - 720346927))))) >= (max((arr_4 [i_5] [i_10] [i_5]), (arr_22 [i_5] [i_5] [i_11])))))), ((var_11 << (((((arr_28 [i_5] [i_5] [i_12]) ? var_4 : 491385149817183295)) - 97))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
