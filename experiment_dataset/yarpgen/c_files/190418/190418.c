/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((-(-5741677351770480251 - var_11)));
                arr_7 [i_0] [i_1] = ((1 + (max((max(var_7, var_5)), 5741677351770480250))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_14 [i_1] [i_1] [i_1] [i_0] = (var_3 > var_3);
                            var_12 -= var_6;
                            var_13 *= ((var_3 < (((-32767 - 1) ? (~var_8) : var_10))));
                        }
                    }
                }
            }
        }
    }
    var_14 = var_6;
    var_15 = ((((var_4 ? -77 : (min(var_0, var_10)))) <= var_2));
    var_16 = (((((219 / (max(18446744073709551595, -7))))) ? ((-114 ? -1 : 3277607155)) : ((((var_10 / var_8) - var_6)))));
    #pragma endscop
}
