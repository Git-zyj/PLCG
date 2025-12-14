/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [11] [i_1] = ((((arr_0 [i_0] [i_1]) ? var_14 : ((2861875187 ? var_5 : (arr_3 [i_1] [i_1]))))));
                arr_6 [i_0] = ((-3922836251255491198 == (arr_0 [10] [10])));
                arr_7 [i_0] = ((((((arr_2 [i_0]) & (arr_1 [i_0])))) - (min((((var_12 ? 0 : var_11))), var_1))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 7;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] = (var_3 / 2);
                    arr_17 [i_2] [i_3] [i_3] = ((max(((min((arr_10 [i_3 - 4]), var_11))), (arr_2 [i_4]))));
                }
            }
        }
    }
    var_17 &= ((var_4 >= ((max(16470, 16474)))));
    #pragma endscop
}
