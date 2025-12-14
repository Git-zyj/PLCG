/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min((min(var_11, var_3)), var_14))) ? var_14 : var_7));
    var_20 = (max(6850840431357395506, -29899));
    var_21 = -86;
    var_22 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_23 *= -1884257639;
                    arr_9 [i_2] = ((((var_1 ? 11595903642352156103 : (arr_2 [i_2 + 1] [i_2 + 2]))) % ((max(32760, (arr_8 [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 + 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
