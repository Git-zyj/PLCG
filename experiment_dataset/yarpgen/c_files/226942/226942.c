/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_14 *= (((arr_4 [i_0] [i_0]) ? var_9 : -1508976761));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_15 [i_0] [i_3] [i_2] [i_1] [i_0] = (((arr_4 [i_0] [i_1]) >> (((!(arr_5 [i_0] [i_1] [3]))))));
                            var_15 = ((~(min((arr_12 [i_0] [7] [i_4]), ((((arr_5 [4] [i_2] [i_3]) < 1)))))));
                            var_16 = (min(((var_2 ? var_7 : (((-1508976762 || (arr_12 [i_0] [i_1] [9])))))), ((-((max((arr_1 [i_0] [i_4]), 88)))))));
                            var_17 = (arr_7 [3] [i_1] [i_2] [i_2]);
                        }
                        var_18 += (((116 ? 4938942949361855209 : 1435806117)));
                        var_19 = ((-((-(~2615824305)))));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_20 = (((max((((arr_6 [3] [i_0] [i_0]) >> (var_3 + 142))), var_3)) & ((max((arr_14 [i_0] [i_1]), (arr_14 [i_0] [i_1]))))));

                        for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [i_1] = (arr_10 [i_0] [i_1] [i_2] [i_5] [8]);
                            arr_24 [i_1] [i_1] [i_1] [i_0] [i_1] = (983463323 && 39055);
                            arr_25 [i_5] [i_1] [i_1] &= (53283 - (max(1435806117, -983463323)));
                            arr_26 [4] [i_5] [i_2] [i_6] [i_5] [i_2] &= ((-var_7 || ((((arr_22 [2] [i_0] [i_6 - 1] [i_6] [i_6] [i_5]) ^ (arr_13 [i_5] [i_5] [i_6 + 1] [i_6] [i_6] [i_6] [i_6 - 1]))))));
                            arr_27 [7] [i_0] [i_5] = (((min((arr_9 [i_1] [i_2]), (arr_9 [i_1] [i_5])))) ? var_9 : ((-1435806114 + (arr_5 [3] [i_1] [i_1]))));
                        }
                        for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_21 = var_12;
                            var_22 ^= 1435806112;
                        }
                        arr_32 [i_0] [i_0] [i_0] [i_0] = (((max((arr_0 [i_0]), ((((arr_21 [i_0] [i_0]) ^ var_9)))))) ? ((-var_5 ^ ((min(-9731, -1508976740))))) : ((((!var_10) ? (arr_2 [i_0] [2]) : 1))));
                        arr_33 [i_0] [i_1] = -1;
                        var_23 = var_7;
                    }
                    var_24 = (min(var_0, (arr_6 [i_0] [i_1] [10])));
                    var_25 -= ((((arr_21 [i_1] [6]) ^ var_6)));
                }
            }
        }
    }
    var_26 = 1508976761;

    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                {
                    var_27 *= 116;
                    var_28 *= (-1508976769 || -1435806113);
                    var_29 = (arr_35 [i_10]);
                }
            }
        }
        var_30 -= (min(1435806112, -1435806133));
    }
    #pragma endscop
}
