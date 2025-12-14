/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (max(var_19, (((~(arr_2 [i_0] [i_0]))))));
        var_20 = var_8;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_21 += (max(var_13, (((!(((arr_0 [i_1] [i_1]) >= 93)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_22 &= (min(var_14, (min((((-1 || (arr_6 [i_3] [i_2])))), ((var_13 << (((arr_2 [15] [i_3]) - 11))))))));
                    var_23 = (max(((min((var_12 <= 1863655636), (((arr_7 [i_3] [i_1]) && -1768719275))))), (max((arr_8 [i_1]), var_11))));
                }
            }
        }
    }
    #pragma endscop
}
