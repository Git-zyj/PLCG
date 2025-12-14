/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] &= (min(-72634263, (min((((52 ? 194 : -7))), (min(var_8, (arr_1 [i_0])))))));
                var_21 ^= ((var_19 & (((arr_0 [i_0 - 4]) ? var_7 : var_0))));
                var_22 *= ((arr_5 [i_0 - 3] [i_0 - 2]) * (max(var_4, (arr_5 [i_0 - 3] [i_0 - 2]))));
                arr_7 [i_1] = (min(((((arr_2 [i_0 - 2] [i_0 - 2]) && (arr_2 [i_0 - 2] [i_0 - 4])))), (max((arr_2 [i_0 - 3] [i_0 - 4]), var_13))));
            }
        }
    }
    #pragma endscop
}
