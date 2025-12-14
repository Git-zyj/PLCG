/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_13 % ((63 ? 4095 : 4095))))) ? ((((~var_10) ? var_12 : (~var_19)))) : 4294967295);
    var_21 = (((max(14, -4093))));
    var_22 = 3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_23 = ((!((((arr_3 [i_0]) ? (!4087) : var_17)))));
                                arr_11 [i_0] [i_1] [i_1] = ((-((127 ? 4095 : 0))));
                            }
                            for (int i_5 = 1; i_5 < 11;i_5 += 1)
                            {
                                var_24 *= (arr_4 [8] [9]);
                                var_25 = (((min((arr_0 [i_5 - 1]), (arr_4 [1] [i_5 + 1]))) % (((-32763 % (arr_4 [i_0 - 1] [i_2 - 1]))))));
                                arr_16 [i_2] [i_2] = (((arr_9 [i_2 + 1] [i_1] [i_1] [i_3] [i_5 + 1] [i_1] [i_1]) >> (((arr_14 [i_2 + 1] [i_5 - 1] [i_0 + 2] [i_3]) + 11148))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 12;i_6 += 1)
                            {
                                var_26 = ((-(((!(arr_6 [i_0 + 2] [i_2 + 2] [i_2 + 2] [i_6]))))));
                                var_27 = (min(var_27, ((((arr_3 [i_0 - 1]) ? var_8 : (arr_3 [i_0 + 1]))))));
                                arr_20 [i_0] [i_0] [i_0] = var_9;
                            }
                            var_28 ^= var_4;
                            var_29 = (min(var_29, ((min((arr_12 [i_0] [i_0] [i_3]), 72066026)))));
                        }
                    }
                }
                arr_21 [i_1] [i_0] = (((~(arr_2 [i_0 + 2]))));
            }
        }
    }
    #pragma endscop
}
