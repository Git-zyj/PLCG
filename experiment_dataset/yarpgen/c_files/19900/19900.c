/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (min((!var_14), (max(var_8, var_11))));
    var_20 = (max((max(var_9, (~var_8))), -279488950));
    var_21 = (max((-279488965 ^ 40554748), var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_22 = ((((((arr_1 [i_1 - 3]) ? var_9 : 238))) ? ((((arr_3 [i_0] [i_1] [i_1 + 1]) || var_11))) : (max(279488989, -279488953))));
                arr_5 [i_1] [i_1] = var_4;
                arr_6 [i_1] [i_1] = 4254412520;
            }
        }
    }
    #pragma endscop
}
