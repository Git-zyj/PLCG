/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_5);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((min(var_8, -1795)))));
                var_13 = (arr_4 [i_0] [i_0] [i_0 + 1]);
                var_14 = (min((~30533), ((1485064692 + ((-(-32767 - 1)))))));
            }
        }
    }
    var_15 ^= var_9;

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_16 = 1485064694;

        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_2] [i_3] [i_3 - 1] = (max(0, 10));
            arr_13 [i_3] = ((-((min((arr_9 [i_3 - 1]), (arr_9 [i_3 - 1]))))));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_23 [i_2] [i_5] [i_5 + 3] [i_6] [i_5 + 3] = (max((((-1485064695 + 2147483647) << (((((~95) + 113)) - 16)))), var_6));
                            arr_24 [i_2] [i_5] [11] [i_2] [i_2] = (arr_22 [i_2] [i_4] [i_5] [i_6] [i_5 + 1] [1] [19]);
                            var_17 = (max(var_17, ((max(32767, (max((arr_21 [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_6]), (arr_21 [i_5 - 1] [8] [8] [8] [8] [i_7]))))))));
                        }
                    }
                }
            }
            var_18 = (max((((!((max(4294967295, 20703)))))), (((((1 ? -30528 : 1))) + (max(7006418862470815974, 22868))))));
        }
    }
    #pragma endscop
}
