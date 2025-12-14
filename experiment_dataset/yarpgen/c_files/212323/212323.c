/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-1 ? var_4 : (min((((var_4 ? 15 : var_8))), (min(15, var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((-((6422916466549876907 ? 6422916466549876883 : 219))));
                arr_8 [12] [i_1] [i_1] &= -240;
            }
        }
    }
    var_12 = var_3;
    #pragma endscop
}
