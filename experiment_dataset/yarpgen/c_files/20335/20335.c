/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = 64102;

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_15 = 218;
            arr_5 [0] [i_1 + 1] [i_0] |= ((var_7 > (((arr_2 [i_1 + 1] [i_1 - 2] [i_1 + 1]) ? var_5 : (arr_2 [i_1 + 1] [i_1 - 1] [i_1 + 1])))));
            var_16 -= (+((((~2871654080) > 1))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_17 = ((+(min((arr_2 [i_0] [i_0] [i_0]), (var_0 + 1)))));
            var_18 = var_5;
            arr_8 [i_2] = ((var_2 ? var_5 : (arr_0 [i_2] [i_0])));
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_11 [21] [i_3] = (((((((1 ? var_5 : (arr_6 [i_3])))) ? 4001998497 : var_9)) >> (((arr_1 [i_3]) - 1646891604))));
        arr_12 [5] = ((25414 ? 1031477324006111048 : 109));
        arr_13 [i_3] |= 197;
        var_19 = 262143;

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_20 = ((!(arr_2 [i_3] [i_4] [i_3])));
            arr_16 [10] [i_4] = (((((arr_6 [i_3]) || (arr_6 [i_3]))) || ((((arr_6 [i_3]) ? (arr_6 [i_3]) : (arr_6 [i_3]))))));
            var_21 = (((((((arr_7 [i_3] [i_3] [i_3]) > (arr_7 [i_3] [i_3] [i_4]))))) > (arr_7 [i_3] [i_3] [i_4])));
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    {

                        for (int i_7 = 3; i_7 < 21;i_7 += 1)
                        {
                            var_22 = ((~(((arr_22 [i_5 + 2] [i_6] [i_6 + 2] [i_7 + 1] [i_6 + 2]) | (arr_22 [i_5 + 1] [i_6] [i_6 + 1] [i_7 - 3] [i_6 + 1])))));
                            arr_23 [3] [i_4] [i_6] [i_6 + 1] [i_4] [i_6 - 2] [i_5 - 2] = (arr_20 [2] [0] [7]);
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_26 [i_3] [i_6] = 1;
                            arr_27 [i_3] [i_4] [21] [i_5] [i_6 - 2] [i_8] [i_6] = ((var_3 > (~3991679854)));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_23 *= var_7;
                            var_24 &= ((((((arr_30 [i_5 - 2] [i_5 + 1] [i_5 - 3] [i_6 - 1]) > (((arr_4 [i_6] [9]) | var_9))))) > (arr_14 [8])));
                            arr_31 [i_6] [i_4] [i_4] [i_6 - 1] [i_9] = (0 > 1);
                            var_25 = (((min((arr_3 [i_6]), (arr_4 [i_6] [i_9])))));
                        }
                        arr_32 [i_5] [i_6] = max((((25 > (arr_28 [i_5 - 3] [i_5 - 1] [i_5 + 2] [i_5 - 1])))), (arr_28 [i_3] [i_3] [i_3] [i_3]));
                        arr_33 [i_3] [i_6] = ((((((arr_29 [14] [17] [i_6] [i_6 - 2] [1] [i_5]) ? ((9945985851879282796 ? 8308389867213688916 : (arr_0 [i_3] [i_6]))) : ((((1 > (arr_18 [i_3])))))))) ? 3073591833 : (9498285621429229067 > var_8)));
                    }
                }
            }
        }
    }
    var_26 = 18446744073709551615;
    var_27 += (((var_11 ? var_11 : var_3)));
    #pragma endscop
}
