/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_11 = (max((arr_0 [i_0] [i_0]), (!1595887923)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 *= var_1;
                            arr_10 [7] [i_0] [i_0] = (((arr_2 [i_1 + 1]) + var_0));
                        }
                    }
                }
                var_13 |= (arr_8 [i_0] [i_1] [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            {
                var_14 &= ((((((((arr_5 [4] [i_5] [i_4]) - (arr_5 [i_5] [i_5] [i_4]))) < ((((arr_11 [i_4] [0]) > var_9)))))) < 204));
                var_15 = (min((~1), (arr_8 [i_5] [i_5 - 2] [i_4] [i_4])));
                var_16 = (min(var_16, (((123 ? 0 : (arr_8 [i_4] [i_4] [i_5] [i_5 + 1]))))));
            }
        }
    }
    var_17 = (min(var_17, (((((65514 - var_0) << ((var_4 ? var_9 : 123))))))));
    var_18 -= var_7;
    #pragma endscop
}
