/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(var_7, var_5))) | var_7));
    var_21 = (min(((min(561211475, (-2147483647 - 1)))), (~var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [9] [i_1] [11] = (((((min(561211475, 2147483626)))) ? (max((var_14 == 1551544312176799862), (min(var_13, (arr_2 [i_1] [i_0] [i_0]))))) : ((((min((arr_1 [0]), 16895199761532751753))) ? -2147483624 : (arr_2 [i_0] [i_1] [i_1])))));
                arr_5 [i_0] [i_1] [6] = var_4;
            }
        }
    }
    #pragma endscop
}
