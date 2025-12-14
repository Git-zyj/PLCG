/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (120 & -36);
    var_15 = var_9;
    var_16 = (max(((-44 ? -88 : var_12)), var_2));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((-((((((var_11 + (arr_7 [i_0])))) && ((min(var_12, 113)))))))))));
                    arr_9 [i_0] [i_1] [i_2] = (max(-88, -74));
                    var_18 -= (((arr_7 [i_0]) && ((max(((39 ? 99 : var_3)), (-100 & 99))))));
                    var_19 = (min(var_19, ((max(-72, (max(-var_4, (min(var_0, var_11)))))))));
                }
            }
        }
    }
    #pragma endscop
}
