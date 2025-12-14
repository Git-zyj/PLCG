/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_10;
    var_12 = (max(var_12, ((min((max(var_4, -1)), var_10)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((-1 & ((0 & (arr_1 [i_0] [i_0])))));
                        arr_12 [i_3] [i_3] [i_2] = ((((1995337869 << (((max((arr_9 [i_0] [i_0] [i_2] [i_0] [i_3] [i_3]), (arr_1 [i_0] [i_0]))) - 4888660988885550008)))) >> (15987380627036065394 - 15987380627036065382)));

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_13 ^= (max((min((arr_1 [i_0] [i_1]), -1)), 26624));
                            arr_17 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = (((min((arr_10 [i_1] [i_2] [i_3]), (min((arr_15 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3] [i_4]), 9)))) >> (((min((((arr_10 [i_4] [i_2] [i_0]) / 1)), (min(40076, (arr_13 [i_0] [i_2] [i_3] [i_4]))))) - 40031))));
                            arr_18 [i_0] [i_4] [i_2] [i_3] [i_4] [i_3] = (max(((46 && (arr_9 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0]))), (((((-1 + 9223372036854775807) >> (((arr_6 [i_4]) - 17714)))) != (((max(1, 40092))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_14 &= (arr_4 [i_0]);
                            arr_23 [i_3] [i_3] [i_3] [i_3] [i_5] [i_5] [i_0] = 1;
                        }
                    }
                }
            }
        }
        var_15 = (min(1, -665455850));
    }
    #pragma endscop
}
