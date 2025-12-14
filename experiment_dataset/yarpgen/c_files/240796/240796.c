/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = ((arr_2 [i_3]) ? (min(var_9, -81)) : 1850948617);

                            for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                            {
                                var_18 = var_8;
                                var_19 = ((~(1850948617 | var_13)));
                                var_20 = ((+((var_5 ? (arr_14 [i_0] [i_1] [i_0] [i_2 + 2] [i_4 - 1] [i_4]) : (arr_14 [i_2] [i_2] [i_0] [i_2 + 1] [i_4 + 1] [2])))));
                            }
                            for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((+(((arr_14 [i_5] [i_5] [i_0] [i_0] [i_0 + 1] [i_0 + 1]) ? (((!(arr_4 [i_0 + 1])))) : (max((arr_11 [i_0 - 1] [i_0]), (arr_13 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1])))))));
                                var_21 = (arr_14 [i_5 + 2] [i_1] [i_0] [i_3] [i_0 + 1] [i_3]);
                                var_22 = (((var_4 ^ var_1) < ((((arr_13 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1]) < (((arr_13 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0]) ? var_11 : 8188)))))));
                                arr_20 [1] [i_0] = (((((arr_14 [i_0] [i_1] [i_0] [14] [i_3] [i_5]) ? (((arr_9 [i_0] [i_0] [i_2] [i_3] [1]) ? (arr_11 [i_0] [i_0]) : (arr_3 [i_0] [i_0] [1]))) : ((-1850948618 ? var_14 : 236)))) | ((((((var_11 ? -2070601657 : (arr_2 [21])))) < (max((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0]))))))));
                            }
                            for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
                            {
                                var_23 = ((((var_5 ? var_3 : (arr_12 [i_0] [i_1] [i_0] [i_6 + 2] [i_0 + 1]))) < 1850948617));
                                var_24 = (max(-25494, 1));
                            }
                            arr_23 [i_0] = 81;
                        }
                    }
                }
                var_25 = (max(var_25, (((!(arr_18 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_1]))))));
                var_26 = var_11;
            }
        }
    }
    var_27 = ((-(-var_12 - var_1)));
    #pragma endscop
}
