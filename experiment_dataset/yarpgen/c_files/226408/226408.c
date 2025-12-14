/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = 2306885072;
                var_19 &= (((max((arr_4 [i_0 + 1]), (arr_4 [i_0 - 2]))) - (min((arr_2 [i_1]), (arr_4 [i_0 - 2])))));
            }
        }
    }
    var_20 = -16105;

    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        var_21 |= (max(12422623582471979763, 0));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_22 = ((+(max((arr_5 [i_2 + 1] [i_3 + 1] [i_4 + 2]), var_18))));
                        var_23 = ((((min(1, 1))) + 202));
                        var_24 &= ((-((((-(arr_9 [i_2 + 1] [i_2 + 1]))) >> ((((-38 ? 79 : 3)) - 60))))));
                    }
                }
            }
        }
        var_25 = ((var_6 - (max(760120959, (arr_11 [i_2] [i_2 - 2])))));
        var_26 = (((max((arr_2 [5]), (arr_2 [i_2])))) || ((min((max(255, 18178713432508302791)), -80))));
        arr_20 [i_2] [i_2 - 1] = ((+(((((max((arr_2 [i_2]), (arr_16 [i_2] [1]))))) & (arr_7 [i_2])))));
    }
    #pragma endscop
}
