/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_10 >= var_2) * var_3));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_21 -= (((((var_5 ? (arr_6 [i_1] [i_0 + 1]) : (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_3 - 1])))) <= ((18894 ? 222 : 4691914450127695253))));
                            var_22 = var_13;
                            var_23 = ((89 ? (min((!var_5), ((var_6 ? var_13 : var_0)))) : -1));
                            var_24 = (max(var_24, ((min(((var_2 ? var_5 : (arr_2 [i_0 + 2] [i_0 + 3]))), (((var_12 >> (var_14 + 15880)))))))));
                        }
                    }
                }
                var_25 = var_11;
                var_26 *= var_11;
            }
        }
    }
    #pragma endscop
}
