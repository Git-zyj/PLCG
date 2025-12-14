/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (arr_3 [1] [1] [i_0]);
                    var_19 = ((((arr_3 [i_2 + 1] [i_2 + 2] [i_2 + 2]) ? (arr_3 [i_2 + 2] [i_2 + 2] [i_2 + 3]) : (arr_3 [i_2 + 1] [i_2 - 1] [i_2 + 3]))));
                    var_20 |= (((((arr_4 [16] [i_2 - 1]) ? (arr_4 [i_1] [i_2 + 1]) : var_13)) + (arr_3 [i_2 - 1] [i_0] [i_0])));
                    var_21 = (max(var_21, var_0));
                }
            }
        }
    }
    var_22 = (min(var_22, var_7));
    #pragma endscop
}
