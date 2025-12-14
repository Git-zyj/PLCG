/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((67076096 ? (((min(var_7, var_13)))) : (min(var_8, var_14)))) >= (123 & 21027));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 &= (44540 ? -8 : 0);
                                arr_11 [i_0] [i_2] [i_4] = max((~4294967292), ((((((arr_0 [i_4]) ? (arr_1 [i_4]) : (arr_4 [i_4] [i_1 - 1] [i_0]))) >= -293410370))));
                            }
                        }
                    }
                }
                var_20 = var_3;
            }
        }
    }
    var_21 |= 1;
    #pragma endscop
}
