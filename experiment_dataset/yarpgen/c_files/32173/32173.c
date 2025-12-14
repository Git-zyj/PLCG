/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) - (~454668526136402788)));
        var_11 ^= ((!((max(0, (arr_1 [i_0]))))));
        var_12 = (((((arr_0 [i_0]) / (arr_2 [i_0] [i_0]))) < 65533));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_13 = 72;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_14 = (arr_8 [i_2 + 2] [i_2 + 1] [i_1 + 4]);
                    var_15 = (((((arr_6 [i_1] [i_1]) > 255)) ? (arr_9 [i_1] [i_1] [i_2]) : (arr_7 [i_1] [i_2])));
                }
            }
        }
    }
    var_16 = var_1;
    var_17 = ((min((~3404587016), var_9)));
    #pragma endscop
}
