/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = ((((((-(arr_4 [i_1 - 1]))) - var_16)) / 3380));
                arr_6 [i_1] = (~-41);
            }
        }
    }
    var_20 |= var_10;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            {
                var_21 = (max(var_21, (((((((~-1542797155) ? (arr_10 [i_3] [i_3 + 4] [i_2 - 1]) : var_4))) ? ((-3385 ^ (arr_9 [i_2 - 1]))) : (arr_11 [i_3 + 1] [i_3 + 1] [i_3]))))));

                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    arr_14 [i_2 - 1] [i_2 - 1] [i_3] [i_4] = (0 >= 105);
                    var_22 = (var_1 - 105);
                    var_23 = 119;
                }
                arr_15 [i_3 - 2] = ((((!(((20466 ? -16153 : 14848))))) ? var_5 : ((-(arr_9 [i_3 - 1])))));
                var_24 = ((((arr_8 [i_2 - 1] [i_3 - 2]) ? var_15 : (arr_8 [i_2 - 1] [i_3 - 1]))));
                var_25 = (((((-(((41 == (arr_9 [i_2]))))))) ? var_13 : ((30 ? var_2 : (arr_13 [i_2 + 2] [i_3 - 1] [i_3] [i_3])))));
            }
        }
    }
    var_26 = (-var_18 ? -42 : (((var_10 == var_18) ? ((var_15 ? var_2 : var_4)) : (51 & 119))));
    var_27 |= ((max(((max(176, var_6))), (-32765 + 6430013188487636720))));
    #pragma endscop
}
