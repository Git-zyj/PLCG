/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (max(var_6, 32));
        arr_5 [i_0] = min((-32767 - 1), 0);
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_1] [i_2] [i_3] = var_11;
                        var_14 *= ((!(~3567)));
                        var_15 ^= var_2;
                        arr_13 [i_0] [i_0] [i_0] = var_2;
                        var_16 = var_1;
                    }
                }
            }
        }
        var_17 = (((((1 == 61958) >= 1)) ? var_9 : ((min(3567, -7)))));
    }
    var_18 ^= (min((var_0 | var_6), (((~(var_6 & var_5))))));
    var_19 = (max(var_19, (((var_9 ? (var_3 && 1414672958) : ((((1 >> 29) != (var_1 >= var_5)))))))));
    var_20 = (max((max(4294967295, ((848077432 ? -1 : var_6)))), (((!((min(1, 0))))))));
    #pragma endscop
}
