/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((((((var_12 ? 1398769927099353054 : 0))) ? (~23487) : var_10)) < ((((((var_19 ? var_16 : -1398769927099353082))) ? var_17 : 9223372036854775807)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_2] = ((!(((1 ? var_1 : 1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_17 [i_3] [i_3] [i_3] [i_1] [i_3] = var_2;
                                arr_18 [i_4] [i_2] [i_2] [i_2] [i_0] = ((!(((~(arr_13 [i_0 + 1] [i_4] [i_0 + 1] [i_3] [i_2] [i_1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
