/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = 45576;
                    var_19 = ((!(!43739)));
                    var_20 = ((var_13 * ((-(((arr_2 [i_0] [i_0] [i_0]) & 7980))))));
                    arr_8 [9] [i_2] [i_2] = ((((((arr_2 [i_2 + 1] [0] [i_2 - 2]) ? (arr_2 [i_2 + 1] [4] [i_2 - 2]) : 57555))) ? ((max((arr_7 [i_2 + 1] [10] [i_2 - 2] [i_2 - 4]), (arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 2])))) : ((min(47810, 47522)))));
                }
            }
        }
    }
    var_21 = ((((max((min(57556, var_7)), 62213))) ? var_0 : ((min((!20331), var_9)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                var_22 = arr_10 [i_4];
                var_23 = (min(var_23, var_3));
            }
        }
    }
    #pragma endscop
}
