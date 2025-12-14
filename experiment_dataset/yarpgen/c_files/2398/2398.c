/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (min(((max(-27, 0))), (min((arr_0 [i_0] [i_0]), ((-36 ? var_8 : (arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_18 ^= var_4;
                        arr_9 [i_3] [i_0] [7] [i_0] = var_17;
                        arr_10 [i_0] [5] [i_2] [i_3] = 39;
                        arr_11 [i_0] [i_0] [i_1] [i_2] [10] [i_3] = var_12;
                        arr_12 [i_0] [i_1] [i_2 + 2] [0] = var_7;
                    }
                }
            }
        }
    }
    var_19 = ((var_17 ? (((((max(79, -83))) >> ((((min(var_9, var_11))) - 145))))) : 9221226189124362651));
    var_20 = var_16;
    var_21 = -var_17;
    #pragma endscop
}
