/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_2, -17514));
    var_12 = 17498;
    var_13 = (min(var_6, ((var_3 ? var_4 : ((min(-17518, 14336)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_12 [i_0 - 1] [i_1] [i_0 - 1] = max((arr_4 [i_0] [i_1] [i_2]), (arr_8 [i_0 + 1] [i_0 - 1]));
                    var_14 -= ((!((((arr_7 [5] [i_2] [i_2]) % ((((arr_6 [i_0 - 3]) < var_9))))))));
                    arr_13 [i_0] [i_1] [i_1] [i_2] = (-1 < -27);
                }
            }
        }
    }
    #pragma endscop
}
