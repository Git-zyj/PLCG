/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= 171;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_0;
                arr_6 [12] [i_1] = max(-115, ((18724387 ? 54 : -9)));
                var_20 = (min(var_20, var_1));
                var_21 = (max(var_21, (((((min(((16891 ? var_12 : var_1)), (((arr_0 [15]) ? 1706 : (arr_4 [i_1] [i_1])))))) ? var_13 : (((!(((arr_2 [i_1 - 1]) && -18724399))))))))));
            }
        }
    }
    #pragma endscop
}
