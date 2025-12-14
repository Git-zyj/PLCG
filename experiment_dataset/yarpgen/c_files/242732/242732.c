/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = -1;
                arr_6 [i_0] [i_0] [i_1] = ((~((min(13, (arr_1 [i_1]))))));
                arr_7 [i_1] [i_1] [i_0] = (((1 * (0 && var_14))) + (arr_1 [4]));
            }
        }
    }
    var_21 -= -23;
    var_22 = (max(var_22, var_2));
    #pragma endscop
}
