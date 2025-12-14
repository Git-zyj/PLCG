/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((~(!0))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = (arr_0 [4] [i_1]);
                    arr_7 [i_0] [i_1] [i_2] [i_0] = (~0);
                    var_20 = (min(var_20, ((min((min(1386186273, 1)), (min((((arr_1 [i_0]) * 32767)), var_5)))))));
                    var_21 &= (!(!1));
                    var_22 = -8017;
                }
            }
        }
    }
    var_23 = (max(var_23, ((((!var_0) - ((((-731371165 + 2147483647) >> 1))))))));
    #pragma endscop
}
