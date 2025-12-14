/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((max(-22431, (min(21418, var_0))))) ? ((min(((-6837517261081135826 ? 44129 : 21418)), var_0))) : var_8)))));
    var_13 += (!var_8);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 ^= ((((13 ? (arr_1 [i_0]) : ((((arr_0 [4]) ^ var_1))))) < (((-(arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = (((arr_0 [1]) & 39836));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_15 -= 9582;

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_8 [i_1] = (((arr_6 [i_1 + 1] [i_1 - 2]) && var_9));
            var_16 = (min((min(var_11, 177)), (arr_4 [i_1])));
            arr_9 [i_2] [i_1] = (max(1258108245, -25153));
            arr_10 [i_1] = (((((+(max((arr_7 [i_2] [i_2] [1]), var_10))))) ? ((min((arr_5 [i_1] [i_1 + 1] [i_1]), ((((arr_5 [i_1] [i_1] [i_1]) > (arr_7 [i_1] [i_1] [i_2]))))))) : (arr_6 [16] [i_1 + 1])));
        }
        var_17 = (min(1048575, (((-2147483640 ? ((var_4 ? (arr_7 [i_1] [i_1] [i_1 + 3]) : var_4)) : (~var_2))))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        arr_19 [i_1] [i_1] = var_0;
                        arr_20 [i_1] [i_4] [i_1] = ((!(((-(arr_12 [i_1] [i_4]))))));
                        arr_21 [i_1] [i_1 + 3] [i_3 - 1] [i_1] = (max(255, (arr_18 [1] [i_5] [i_4] [i_3] [i_1 - 2] [i_1])));
                        arr_22 [i_1] = var_5;
                    }
                }
            }
        }
    }
    #pragma endscop
}
