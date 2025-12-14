/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((45 || var_1) ? ((min(-114, var_3))) : var_11));
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [7] = -26365;
                            var_14 = ((var_3 ? ((((arr_7 [i_3]) ? ((30904 ? 26366 : (arr_3 [i_2] [i_1] [i_0 - 1]))) : var_9))) : 16451976776995559346));
                        }
                    }
                }
                var_15 = var_3;
                var_16 = (~(~47));
                var_17 = 1994767296713992270;
            }
        }
    }
    #pragma endscop
}
