/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (max(var_18, (124 / 23844)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_19 = -124;
                        var_20 = (max(var_20, ((((arr_5 [i_3]) - (arr_9 [i_2]))))));
                        var_21 ^= -124;

                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            var_22 = (min(var_22, (8008021101294138366 < 55743891693422534)));
                            var_23 = ((((((((arr_2 [i_0]) + 2147483647)) << (15 - 15)))) + ((18186154020919207776 << (-124 + 184)))));
                            var_24 &= (arr_3 [i_0] [i_3] [i_4 + 1]);
                        }
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            arr_18 [i_0] [5] [i_2] [i_3] [i_3] [11] [i_0] = (65533 & 36028792723996672);
                            arr_19 [i_0] [i_0] [i_3] [i_5] = (arr_11 [i_2 + 2] [i_5 + 1] [10] [i_5]);
                            var_25 = (max(var_25, (arr_6 [i_2])));
                        }
                        arr_20 [i_0] [i_0] [i_0] [i_3] [i_3] = (arr_17 [i_0] [i_2]);
                    }
                }
            }
        }
        var_26 = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_27 &= 20365;
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_28 = ((2937183116 >> (26953 - 26931)));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    var_29 = (arr_24 [i_6] [i_8]);
                    arr_28 [8] [i_6] [i_8] = (min((arr_27 [i_7 - 2] [i_7] [i_6] [i_7]), (((20365 >> ((((arr_1 [i_6]) == (arr_16 [i_6] [i_6])))))))));
                }
            }
        }
        var_30 |= ((max((arr_7 [i_6] [18] [i_6]), (arr_3 [i_6] [i_6] [i_6]))) & (((((arr_5 [i_6]) * 36028792723996668)) * ((3434971435333543737 / (arr_10 [i_6] [i_6] [i_6] [i_6]))))));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_31 = (((arr_27 [i_9] [i_9] [4] [i_9]) ^ (((((arr_7 [i_9] [18] [i_9]) & (arr_3 [i_9] [i_9] [i_9]))) ^ (((arr_10 [i_9] [i_9] [i_9] [i_9]) | (arr_3 [i_9] [3] [i_9])))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    var_32 = 1357784180;

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_33 = (((arr_5 [i_12]) % (arr_30 [i_12])));
                        var_34 = (((arr_36 [i_11]) >> (arr_36 [i_11])));
                        arr_39 [i_12] = (((arr_13 [19] [i_10] [i_10] [19] [i_12]) < -8236580096334844324));
                        arr_40 [i_9] [i_10] [i_11] [1] &= ((2937183101 < (arr_12 [i_9] [i_10] [i_11] [i_12] [i_12])));
                    }
                    for (int i_13 = 2; i_13 < 10;i_13 += 1)
                    {
                        var_35 = (-19722 < 65533);
                        var_36 = (max(var_36, ((15 < (((arr_6 [i_11]) + (arr_9 [i_10])))))));
                    }
                    arr_45 [i_9] [1] [i_9] [5] = (max((arr_15 [i_9] [i_10] [i_10] [i_10] [i_11]), ((((((arr_41 [i_9] [i_9] [i_9] [i_9] [i_11] [i_11]) - 3085047770)) > (((max(35661, -19722)))))))));
                }
            }
        }
        arr_46 [i_9] = ((((((arr_38 [i_9]) > 7))) >> (2468702541 - 26936)));
    }
    var_37 = min(var_1, (((((min(var_3, var_6)))) - 4294967295)));
    #pragma endscop
}
