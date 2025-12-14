/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_0] [i_2] [i_3 + 2]);
                        var_13 = (max(var_13, (((((((arr_8 [i_2] [i_2] [i_3 + 2] [i_3 - 3]) ? 1 : 48))) ^ ((((4268511473 << (4268511453 - 4268511450))) << var_6)))))));
                        var_14 ^= arr_5 [i_3 + 1] [i_2];
                    }
                    arr_10 [i_0] [i_1] [i_2] [i_2] = var_0;
                    var_15 = (max(var_15, ((((-32760 - 26455830) - (((-26455840 ? 1 : (max(-982867325, var_1))))))))));
                }
            }
        }
    }
    #pragma endscop
}
