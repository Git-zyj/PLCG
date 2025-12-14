/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = var_11;
                var_15 = (!1141172638);
                arr_6 [i_1] = ((-((~(arr_2 [i_0 - 1] [i_1])))));
                arr_7 [i_1] = (arr_3 [i_0] [i_1] [i_1]);
                var_16 ^= ((min(var_9, ((~(arr_4 [i_0] [i_1]))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_17 = (min(var_17, 29951));
        arr_10 [i_2] = (arr_9 [i_2]);
        var_18 |= var_0;
        var_19 = (max(var_19, var_8));
        arr_11 [i_2] &= ((-((min(0, 0)))));
    }
    #pragma endscop
}
