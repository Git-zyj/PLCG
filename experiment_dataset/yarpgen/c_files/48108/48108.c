/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_2] = (min(((-((max(27, var_3))))), ((-(arr_4 [i_2] [i_1 + 1] [19])))));
                    arr_11 [i_1] &= (((arr_3 [3]) ? 1 : ((((min(var_0, var_2))) ? (23573 - 238) : (arr_9 [i_0] [i_0] [i_1])))));
                    var_13 = var_7;
                }
            }
        }
    }
    var_14 = var_1;
    var_15 = ((!(((((max(var_12, 16))) ? var_3 : ((23573 ? var_1 : var_10)))))));
    #pragma endscop
}
