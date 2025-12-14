/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (((((~(arr_0 [i_0])))) ? ((54402 ? -2355 : var_16)) : var_16));
        var_21 ^= (min((((!1315501016) ? (((arr_1 [i_0]) ? var_3 : (arr_1 [8]))) : 54414)), ((min((1 % 145), var_15)))));
        var_22 *= (!var_15);
        var_23 = (min(((-((1 ? (arr_1 [i_0]) : var_0)))), (!1952163235)));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                {
                    var_24 = (max(var_24, ((min(((~(arr_6 [i_1] [i_1] [i_2] [i_1]))), ((((var_5 ? 14125 : (arr_6 [5] [i_2] [i_2] [i_1]))))))))));
                    var_25 = -var_3;
                    var_26 = (min(var_26, 4294967283));
                    var_27 = (min((min((~-1925), (~4294967287))), (((~(arr_4 [i_3 - 2]))))));
                    arr_8 [i_3 - 2] [i_2] [i_1] = ((~(~1952163241)));
                }
            }
        }
    }
    #pragma endscop
}
