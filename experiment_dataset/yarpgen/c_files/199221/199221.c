/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 -= (~(((49884 & 1) & (var_4 | var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [6] [6] [i_1] [i_0] = (max(((var_0 ^ (1 < 30))), ((((min((arr_5 [i_0] [i_2]), 339092939)) == (max(-12, (arr_2 [14]))))))));
                    var_14 = (max(var_14, ((min((((!((((arr_6 [i_0]) / 3955874360)))))), ((var_4 * (arr_6 [i_2]))))))));
                    var_15 = (~(max((arr_7 [i_0] [i_1 - 1] [i_2]), ((min((arr_6 [i_0]), var_3))))));
                }
            }
        }
    }
    var_16 = (max(((max(var_4, var_4))), var_2));
    #pragma endscop
}
