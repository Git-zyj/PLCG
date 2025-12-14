/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 7;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_2] [i_3] [4] = ((567453553048682496 - 8527575985816764725) ? (((-(!var_7)))) : (min(var_9, (17879290520660869113 / 4190208))));
                        arr_11 [i_1] [i_3] = (((~(arr_7 [i_3 + 2] [i_3 - 2] [i_3] [i_3 + 2]))));
                        arr_12 [i_3] [i_2] [i_1] [i_3] = (((((((arr_4 [i_0] [i_1] [i_2] [i_3 - 2]) >= (arr_9 [i_0] [i_1] [i_2] [i_1]))))) * (max((arr_9 [9] [9] [i_2 + 2] [i_1]), (arr_4 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 - 1])))));
                        var_11 = (min(var_11, var_9));
                    }
                }
            }
        }
        var_12 = var_5;
    }
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        var_13 = 17879290520660869120;
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    arr_23 [i_4] [i_4] [i_6] [i_6] = (arr_15 [i_4]);
                    var_14 = 4269293545;
                }
            }
        }
    }
    var_15 = var_10;
    var_16 = (((!((min(var_7, 35192))))));
    #pragma endscop
}
