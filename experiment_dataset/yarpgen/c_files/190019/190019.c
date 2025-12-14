/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] = (((((-var_9 == (arr_1 [i_1])))) & -30386));
                        var_11 = ((var_4 ? ((((arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (arr_3 [i_1 + 1]) : ((~(arr_10 [i_2])))))) : ((~((549755805696 ^ (arr_9 [i_0] [i_1] [i_2] [i_3] [i_3])))))));
                    }
                }
            }
        }
        var_12 = -var_2;
        var_13 = -1690013173267624184;
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 13;i_6 += 1)
            {
                {
                    arr_22 [i_6] [i_5] [i_6 - 4] = ((1690013173267624212 ? ((((((7131829359791700941 ? (arr_0 [i_4]) : (arr_6 [i_4] [i_6 - 1]))) > -4)))) : 18446744073709551604));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_14 = min((max(1612799016, 144115188067467264)), 56);
                                var_15 = (min(var_15, ((min(((var_4 ? (arr_27 [i_4] [i_6 + 1] [i_8] [i_8] [i_8]) : (arr_17 [i_5] [i_6 + 1] [i_8]))), (arr_4 [i_6] [i_7 + 1] [i_8]))))));
                                var_16 = ((((var_6 / (((var_2 ? 160 : (arr_6 [i_7 + 1] [i_6 - 4])))))) / (4 / 4)));
                            }
                        }
                    }
                }
            }
        }
        var_17 += ((((((arr_8 [i_4] [i_4] [i_4]) ? 127 : -77))) ? (arr_2 [i_4]) : ((max((arr_17 [i_4] [i_4] [i_4]), (arr_14 [i_4]))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
    {
        var_18 |= ((6943 ? 7131829359791700923 : (arr_16 [i_9] [i_9] [i_9])));
        var_19 |= var_3;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        arr_34 [i_10] = ((~(var_3 || 64)));
        var_20 = 1690013173267624184;
    }
    var_21 = var_6;
    #pragma endscop
}
