/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = ((~(arr_0 [i_0])));
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] [1] = ((var_9 + (min(((max((arr_0 [i_0]), var_1))), (arr_1 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        var_13 |= (min((min((arr_9 [i_0] [i_2] [i_2] [i_2 + 2] [14]), (arr_9 [i_0] [i_0] [i_0] [i_2 - 3] [8]))), (arr_9 [i_2 + 2] [i_2 - 2] [i_2 + 2] [i_2 - 2] [16])));
                        arr_10 [i_0] [10] [i_2 + 1] = var_4;
                        var_14 = (min(var_14, var_9));
                    }
                }
            }
        }
    }
    var_15 |= (5559468507843205606 >= 1006632960);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            {
                var_16 = (((min((min((arr_14 [i_4]), -5559468507843205606)), (((var_2 ? -1416476773 : (arr_13 [i_5])))))) < ((((min(var_2, var_0)))))));
                var_17 = (((arr_9 [i_4] [i_4] [i_4] [i_4] [16]) ? (((5559468507843205612 ? (~-1006632959) : -1006632954))) : (min(var_1, (min(-5559468507843205593, (arr_16 [i_4] [i_4] [i_5])))))));
                var_18 ^= var_0;
            }
        }
    }
    var_19 = var_2;
    #pragma endscop
}
