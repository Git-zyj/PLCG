/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((-((max((arr_5 [i_0 + 2] [i_1 + 2] [i_2 - 1]), (arr_5 [i_0 + 2] [i_1 - 1] [i_2 - 1]))))));
                    var_17 = (max(var_17, var_10));
                    var_18 = (min(var_18, ((max(1, ((((min(2672, (arr_0 [i_0 + 4])))) && var_11)))))));
                    var_19 = ((+((min((arr_0 [i_1 - 1]), var_6)))));
                }
            }
        }
        var_20 ^= var_12;
    }
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        var_21 += var_0;
        var_22 &= ((((min(var_7, ((1 ? (arr_2 [i_3] [1]) : (arr_0 [i_3])))))) ? var_13 : (2691 - -211235172763614433)));
        var_23 = (min(var_23, (((var_0 ^ (arr_2 [i_3 + 3] [i_3 - 1]))))));
        arr_11 [i_3 - 3] = arr_9 [i_3];
        var_24 = (((arr_0 [i_3 - 1]) ? (arr_5 [i_3] [1] [i_3]) : var_13));
    }
    var_25 = ((1 << (11480 - 11463)));
    #pragma endscop
}
