/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = max(((((min(18446744073709551615, 3740668662))) ? (max(var_1, var_1)) : var_0)), var_6);
                arr_7 [i_0] = (~var_3);
                arr_8 [i_1] [i_1] = (((((min(var_4, (arr_1 [i_0]))))) & (arr_3 [i_0])));
                var_10 |= (arr_3 [i_1]);
            }
        }
    }
    var_11 = ((((min((!var_5), ((var_4 ? 3740668662 : 3740668662))))) ? var_3 : ((var_1 ? var_2 : -33))));
    var_12 = var_3;
    var_13 = var_1;
    #pragma endscop
}
