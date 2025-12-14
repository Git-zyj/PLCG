/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~1);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 &= (arr_0 [11]);
        arr_3 [i_0] |= (!205);
        var_12 ^= (+(((((arr_2 [i_0]) ? -127 : var_7)) - (min(76, 2136653528)))));
    }
    var_13 |= ((var_6 >= (var_9 && var_7)));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                var_14 -= (arr_7 [i_1] [i_2]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_15 = 1;
                            var_16 = (((max(var_3, (arr_5 [i_1])))));
                            var_17 ^= (((var_3 && 44) ? (((arr_11 [i_1] [10] [i_1]) ? var_4 : 66)) : ((((-(arr_8 [11] [i_2] [i_4])))))));
                            var_18 ^= min(8, ((var_7 | (arr_4 [i_3]))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_23 [i_1] [i_1] [i_5] [i_6] [i_5] [i_5] = (min((min(var_2, var_6)), (((109 != (arr_14 [i_1] [i_6] [i_1] [i_6] [i_6 + 3]))))));
                            arr_24 [i_1] [4] [4] [i_6] = ((+((((((arr_14 [i_1] [i_6] [i_5] [i_6] [i_6]) ? (arr_7 [i_1] [i_2]) : 0)) == (!var_1))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
