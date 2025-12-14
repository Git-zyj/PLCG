/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_12 &= (arr_0 [i_0 - 3]);
        var_13 = (max(var_13, ((min(((((var_9 + (arr_0 [i_0]))) - 0)), (((arr_0 [i_0]) + var_0)))))));
        var_14 -= ((((((arr_0 [i_0]) ? (arr_1 [6]) : (~73)))) ? ((1 | (arr_0 [i_0]))) : (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = (max((var_5 * 0), ((((arr_3 [i_1] [i_2 - 1] [1]) == (arr_3 [i_1] [i_2 + 1] [i_2 + 1]))))));
                    arr_6 [i_0] [4] [i_2] |= 214;
                    arr_7 [i_0] [i_1] [i_0] [i_0] = (((((134 ? -63 : var_1))) <= var_7));

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_1] [i_0 - 3] [i_1] [i_2] [i_3] [i_3] = ((((((12606 & var_6) ? 2097151 : -var_4))) ? (arr_9 [i_0 - 1]) : (arr_2 [i_0] [i_0 + 1])));
                        var_16 = -5544280525526363780;
                        arr_11 [i_0] [i_1] [i_0] [1] [i_0] = var_0;

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            var_17 *= (((arr_9 [i_0 - 1]) ? ((739795235536192407 ? 4660886638943354717 : 5544280525526363780)) : 1));
                            var_18 = (arr_12 [i_3 + 1] [i_3] [i_3] [i_3] [i_4]);
                            arr_14 [i_0] [i_1] [i_1] [i_4] = 2047;
                        }
                        for (int i_5 = 3; i_5 < 18;i_5 += 1)
                        {
                            var_19 = ((((max(1, var_3)) * (((463840476 ? -2466384300248826166 : (arr_0 [i_3 + 2])))))));
                            arr_17 [i_3] [i_1] [i_3] [i_3] [i_1] [1] [i_5] = (!1766135378);
                            var_20 = (min(var_20, (((var_5 ? ((~(((arr_8 [i_0 - 3] [18] [i_1] [i_3]) ? var_4 : (arr_0 [i_1]))))) : (((~var_2) ? ((var_9 ? 0 : var_4)) : 270690336)))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_21 ^= (~2113500966);
                        var_22 *= (((arr_13 [i_0 + 1]) ? (-127 - 1) : (arr_13 [i_0 + 1])));
                        arr_21 [i_1] [11] [i_2] [i_6] = (((-9223372036854775807 - 1) ? 110 : -22846));
                        var_23 = (min(var_23, (((-((6777355390424710187 ? 10219 : (arr_12 [i_6] [i_2] [i_2] [i_1] [i_0]))))))));
                    }
                }
            }
        }
    }
    var_24 = (min((((((8425922507440437509 ? 53633 : var_9))) - var_8)), ((min(var_10, ((var_7 ? -82 : var_0)))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_25 = 10257;
                var_26 = var_10;

                for (int i_9 = 3; i_9 < 23;i_9 += 1)
                {
                    var_27 = (255 + 1);
                    var_28 += ((+((1 ? (arr_31 [i_7] [i_8] [i_9] [i_7]) : 73))));
                }
            }
        }
    }
    var_29 = var_5;
    #pragma endscop
}
