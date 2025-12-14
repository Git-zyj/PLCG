/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_10 ? (max((max(28683, var_16)), var_9)) : var_2));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_19 = (arr_0 [i_0 + 2]);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_20 *= ((-(min(var_8, ((max(-21, 2711870763)))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_4] = ((341278155 ? -6278456669468925470 : var_6));
                            var_21 *= ((123 ? (arr_5 [i_4]) : 5549));
                            var_22 = var_15;
                        }
                    }
                }
            }
            arr_16 [8] |= ((min((arr_7 [2]), (arr_7 [10]))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_26 [0] [i_0] [i_1] [i_0] [i_0] [i_6] [0] = ((((((arr_20 [i_0 + 1] [11] [i_0 + 1] [i_0 + 4] [i_0] [i_0 + 4]) ? (arr_20 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0]) : var_15))) ? (arr_20 [10] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 3]) : -15));
                            var_23 = (min(var_0, ((((((arr_7 [i_0]) ? 10893 : 341278162)) < (((-32767 - 1) / var_13)))))));
                        }
                    }
                }
            }
        }
        arr_27 [i_0] = ((-((+(((arr_4 [i_0] [i_0] [i_0]) ? -22 : var_11))))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_24 = (arr_28 [18] [i_8]);
        arr_30 [i_8] [i_8] = (((((arr_29 [i_8]) >> (((arr_29 [i_8]) - 17368143223998853023)))) <= ((min(-341278138, 341278162)))));
    }
    #pragma endscop
}
