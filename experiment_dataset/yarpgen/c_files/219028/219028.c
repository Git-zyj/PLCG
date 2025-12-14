/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((~(max(var_9, var_4)))), (((((var_6 ? var_4 : var_8)) << (var_2 - 727451956))))));
    var_11 &= max((((((var_7 ? var_8 : var_1))) ? var_5 : (!var_2))), (min(var_2, var_2)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = (((max((((arr_6 [i_1 + 3]) << (200 - 196))), (~var_0))) <= 11625));
                    var_13 = (arr_1 [i_2] [i_1]);
                    var_14 = ((-((((max(0, 41692))) ? var_2 : (2122627583 <= 1573)))));
                }
            }
        }
    }
    #pragma endscop
}
