/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_10 = (((((3706151558 & ((min(73, var_5)))))) ? (((max((((arr_7 [i_0] [i_1] [i_2 - 1] [i_0]) < -3)), (max(var_5, var_9)))))) : (((arr_5 [i_1 + 1] [i_2 + 2]) / -6525299571768914279))));
                    var_11 = ((var_6 * ((((min(37, var_2)))))));
                    var_12 -= 3;
                    var_13 = ((~(min(var_7, ((-1 ? 0 : 700489223))))));
                }
            }
        }
    }
    var_14 = (max(((var_2 ? var_8 : var_3)), var_2));
    #pragma endscop
}
