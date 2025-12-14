/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = (var_9 > var_5);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (max((((-(arr_6 [i_0])))), 263882790666240));
                    var_13 = (max(var_13, ((min((((arr_2 [i_2] [i_2]) ? (arr_2 [i_2] [i_2]) : (arr_3 [i_2] [i_2]))), (arr_2 [i_1] [i_0]))))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_3] [i_3] = (min(((((((arr_2 [i_0] [i_1]) ? var_3 : 0))) ? (arr_11 [i_0] [i_0] [i_2] [i_3]) : (var_8 || 148))), ((((max(var_7, 57896)) >= (((var_5 ^ (arr_13 [i_0] [i_0])))))))));
                        arr_15 [i_0] [i_0] = ((((arr_0 [i_0 - 1]) & (arr_0 [i_0 + 2]))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
