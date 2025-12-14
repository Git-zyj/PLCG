/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((var_14 + 2147483647) >> ((((var_10 ? var_3 : var_11)) - 74))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_16 = var_14;
                            var_17 -= ((((((-3837194766059021343 ? var_11 : 1))) <= (max((arr_4 [0] [0] [i_3]), 8562082531878425599)))));
                            arr_11 [i_0] [4] [i_1] [4] = ((-((max((arr_6 [i_2 + 1] [10] [10]), 3530)))));
                        }
                    }
                }
                var_18 = (min(var_18, var_14));
            }
        }
    }
    var_19 = ((((((13897 ? var_10 : var_13)))) ? (458752 >= -32763) : var_5));
    #pragma endscop
}
