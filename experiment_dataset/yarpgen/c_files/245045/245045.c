/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (((5595331148409298452 ? (~9223372036854775807) : (((~(arr_1 [i_0] [1])))))));
                arr_5 [i_1 + 1] = ((((((arr_2 [i_1] [i_0] [i_0]) / (((arr_2 [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [9] [9]) : var_7))))) ? (((-9223372036854775807 - 1) | -1)) : (((((arr_0 [5]) != (arr_1 [i_0] [i_0]))) ? var_10 : (min(-1239827072857390344, (arr_1 [i_0] [i_1])))))));
                arr_6 [9] [9] = (((((+((((arr_0 [i_0]) == var_1)))))) ? 7628022970331171234 : var_10));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_14 ^= ((+(((arr_9 [i_1 - 1] [i_1 - 1]) ? (((var_8 ? var_1 : var_3))) : ((1078810834173084625 ? -25186 : -1239827072857390344))))));
                    var_15 += (((max((arr_9 [i_0] [i_1]), -5595331148409298452)) < (arr_1 [i_0] [i_0])));
                    var_16 &= (max(((((min(-1239827072857390344, var_12))) ? (!193) : -1239827072857390344)), (arr_9 [i_0] [i_0])));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_17 *= ((((((arr_4 [i_1 + 1] [i_1 - 1]) - 250))) | var_9));
                    arr_15 [i_3] [10] [i_0] |= (max((((6225974208934342152 - 6225974208934342174) ? ((max((arr_13 [i_1] [i_0]), (arr_1 [i_0] [i_0])))) : (((arr_13 [i_3] [i_0]) ? (arr_14 [1] [i_1 - 1] [i_1] [3]) : (arr_1 [i_1] [i_3]))))), (arr_9 [4] [i_1])));
                    var_18 -= (arr_8 [i_0] [i_0] [i_0]);
                    arr_16 [i_0] = (arr_7 [i_1] [i_1] [i_1]);
                }
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
