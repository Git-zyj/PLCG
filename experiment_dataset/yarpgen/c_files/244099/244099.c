/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_2 ? (min((var_2 - var_0), 528193000)) : var_6);

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (!-749);
        arr_4 [i_0 + 1] = (max(((var_8 << (((arr_2 [i_0]) - 39607)))), ((~(min(0, (arr_0 [1])))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {
                        var_19 *= (((arr_6 [i_1] [i_2]) ? (arr_5 [i_1]) : (~var_14)));
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = ((-(((((var_7 ? 27675 : var_12)) < var_10)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4 + 1] [i_4] = var_14;
        var_20 += (arr_1 [i_4]);
        var_21 |= var_12;
    }
    #pragma endscop
}
