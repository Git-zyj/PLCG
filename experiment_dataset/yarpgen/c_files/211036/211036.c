/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = ((((var_2 / (arr_9 [i_2] [i_1 - 2]))) * (((min(12543, 52266))))));
                    var_21 = ((-(max(884145368, (~var_6)))));
                }
            }
        }
        arr_11 [i_0 - 2] [i_0 - 2] = (min(var_15, (arr_2 [4] [i_0])));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 8;i_3 += 1) /* same iter space */
    {
        var_22 = var_4;
        var_23 = (((arr_1 [i_3 - 1]) >> (((arr_1 [i_3 + 1]) - 327619988))));
        var_24 = (((arr_0 [i_3 - 3] [i_3]) * (arr_0 [i_3 - 2] [i_3 - 2])));
    }
    for (int i_4 = 3; i_4 < 8;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            var_25 = (max(var_25, ((((arr_7 [i_5] [i_4 - 2] [i_4]) | -var_1)))));
            var_26 += (arr_20 [3] [i_4]);
        }
        var_27 = (max((((((-(arr_2 [7] [i_4 + 4]))) - (max((arr_6 [18] [i_4] [i_4]), (arr_7 [i_4] [i_4] [i_4 + 1])))))), (((arr_15 [i_4 + 4]) ? (min((arr_9 [20] [20]), (arr_13 [i_4]))) : (arr_9 [8] [8])))));
        var_28 = (min(var_28, (((((((~((max(1, 53))))) + 2147483647)) >> ((((-(max((arr_3 [i_4]), (arr_9 [20] [20]))))) + 3954480735909929926)))))));
    }

    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        arr_24 [i_6] [i_6] = (max((var_14 || -5571011011240048793), (max((197797644 > 62), -351340194))));
        var_29 = ((((arr_9 [i_6] [i_6]) || (arr_22 [i_6] [i_6]))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                {
                    var_30 -= (min((((min(1, (arr_21 [i_6 - 1] [i_7]))) != (((31862 ^ (arr_10 [i_6] [9])))))), ((114 && ((var_0 != (arr_28 [5])))))));
                    var_31 = ((max(10928, 27529)));
                    var_32 = ((-var_1 == ((min(var_18, (arr_4 [i_8] [i_6]))))));
                }
            }
        }
    }
    #pragma endscop
}
