/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_7);
    var_14 = ((((((((min(var_6, var_9)))) / (max(var_11, var_2))))) ? var_0 : ((var_11 ? (min(var_0, var_2)) : ((min(var_3, var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 &= (min(((((min(var_8, (arr_2 [i_0 - 1] [i_0 + 1])))) << (((min(var_11, var_4)) - 222)))), (min((~var_3), ((max(-7, (arr_4 [i_1]))))))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_7 [i_0 + 1] [i_1] [i_0] = (arr_5 [i_0 + 1] [i_1] [i_0] [i_2]);
                    arr_8 [i_0 + 1] [i_0] [i_1] [i_2] = 1023;
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_11 [i_0] = var_8;
                    var_16 = (min(var_16, ((((2147483635 ? var_0 : 6))))));
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_17 = var_3;
                                arr_19 [i_6] [i_5 + 1] [i_5] [i_1] [i_0 + 3] |= -2147483636;
                            }
                            var_18 = (max(((((arr_14 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_0] [i_4 - 2]) && (arr_17 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_4 - 2] [i_4 + 1])))), var_4));
                            var_19 = ((min((arr_4 [i_0]), var_10)));
                        }
                    }
                }
                var_20 = arr_15 [i_0 + 2] [i_1] [i_1] [i_1] [i_1] [i_1];
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                arr_26 [i_8] [i_7 - 1] = var_9;
                arr_27 [i_7 + 1] [i_8] [i_8] = var_4;
            }
        }
    }
    #pragma endscop
}
