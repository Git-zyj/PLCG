/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_2] = 538624896;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = max((max((arr_13 [i_4 + 1] [i_1] [i_2] [i_2] [i_4 - 1]), ((7876828573969682758 ? var_4 : (arr_13 [i_0] [i_2] [8] [i_2] [i_4]))))), (((130023424 ? 1695447374 : 3976115763))));
                                var_21 -= (max(var_9, (((var_14 && (arr_13 [i_0] [16] [i_2] [i_0] [i_4 + 1]))))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] = (max(((-(1789598262 >= 3756342399))), var_14));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 *= 17521326925517801843;
    #pragma endscop
}
