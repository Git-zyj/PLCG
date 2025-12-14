/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (arr_0 [i_0] [i_1]);
                    var_21 = 4851543649513615544;
                    var_22 = (min((((!(arr_5 [20] [i_1 + 1] [i_2] [i_1 - 1])))), (arr_6 [i_1] [i_1] [i_1] [i_0])));
                    var_23 = ((~((~(arr_4 [i_1] [i_1] [i_1 - 1])))));
                }
            }
        }
    }
    var_24 = (~var_2);
    var_25 |= var_18;
    var_26 ^= var_15;
    var_27 = var_4;
    #pragma endscop
}
