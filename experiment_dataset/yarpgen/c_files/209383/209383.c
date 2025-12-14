/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_20 = (((((-(max(-5929791473519150697, -2744289352906633173))))) ? 2744289352906633199 : var_19));
                    arr_7 [i_0] [i_0] [9] [i_0] = (((arr_6 [3] [i_2] [i_1] [i_0]) || 90));
                }
                arr_8 [i_0] [i_1] = 90;
            }
        }
    }
    var_21 -= var_13;
    #pragma endscop
}
