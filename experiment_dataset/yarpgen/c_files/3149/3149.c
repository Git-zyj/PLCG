/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_1] = ((var_10 ? (((var_8 ? 13237213639656182101 : (arr_4 [i_1])))) : 13237213639656182117));
                arr_9 [i_1] [i_1] [i_1] = (((((((arr_3 [i_0]) | (arr_6 [i_0] [i_1] [i_1])))) ? ((((arr_7 [14] [i_1]) ? (arr_7 [i_0] [i_1]) : var_10))) : (((arr_1 [i_0] [i_1]) ^ (arr_1 [i_0] [i_1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 13;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_2] [16] [i_4 - 1] = ((((((~var_7) ? (min(3697806911486184361, (arr_10 [i_2] [i_4]))) : 5209530434053369514))) ? 13237213639656182074 : ((min((((((arr_14 [i_3] [3] [i_3]) + 2147483647)) << (var_6 - 3792773683321036359))), var_1)))));
                    var_14 = (arr_15 [i_4]);
                }
            }
        }
    }
    #pragma endscop
}
