/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_11 ? var_12 : (min(255, 11950758402547381622)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_17 = (max(-31472, (((!(~var_2))))));
                    var_18 *= ((~((var_14 * (arr_1 [i_2])))));
                }
                var_19 = (var_8 % var_15);
                arr_6 [i_1] [i_0] = (((~31472) + ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
                var_20 = (max(var_20, (arr_1 [i_0])));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_16 [i_3] [i_3] = ((896 ? (min(var_0, (arr_15 [i_0] [i_4 - 1] [i_0] [i_4] [i_5 - 1] [i_5 + 1] [i_3]))) : (((max(67, var_15))))));
                                var_21 = 255;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
