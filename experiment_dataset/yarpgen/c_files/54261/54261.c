/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = 62799;
                    arr_7 [i_0] [i_1] [i_2] [i_2] &= ((((((1108307720798208 | 1) % (arr_0 [i_1])))) ? var_12 : ((max(17567, -830860800)))));
                    arr_8 [i_0] [i_1] [i_0] [i_1] = (((-6435005012462076292 > -127) > -126));
                }
            }
        }
    }
    var_20 = var_2;
    var_21 = ((min(-2095800205, 65)));
    #pragma endscop
}
