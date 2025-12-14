/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((18446744073709551615 ? 21 : 1))) ? -1 : 18446744073709551604));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = ((((((arr_4 [i_0 + 1] [i_1] [i_0] [i_0]) | 1))) ? -var_4 : (((arr_4 [i_2] [i_2] [i_2 + 1] [i_0]) ? (~7441836916233395290) : (arr_3 [i_1 + 1])))));
                    var_21 = (arr_4 [i_0] [i_1] [i_1 + 1] [i_0]);
                    var_22 = var_11;
                    arr_6 [i_0] [i_0 + 2] [4] [i_0] = -5400605672538268707;
                }
            }
        }
    }
    var_23 += 0;
    #pragma endscop
}
