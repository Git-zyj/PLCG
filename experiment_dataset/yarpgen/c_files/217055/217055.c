/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((~78) ? (arr_4 [i_0]) : -64)) >= -65526));
                arr_6 [2] [i_1] [i_0] = (~var_10);
            }
        }
    }
    var_17 = (max(var_2, (!var_2)));
    var_18 = var_15;
    var_19 &= (min(((-(var_8 < var_13))), var_14));
    #pragma endscop
}
