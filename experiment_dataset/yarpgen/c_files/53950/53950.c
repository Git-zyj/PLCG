/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (((((var_12 ? (arr_1 [i_0]) : var_15))) ? (arr_1 [i_0]) : (var_1 || 1)));
        arr_2 [i_0] = ((-(arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (arr_3 [i_1 + 4]);
        var_20 = -1;
        var_21 -= (arr_0 [i_1 + 1] [i_1 + 3]);
        arr_7 [i_1] = (var_12 && 1);
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_22 ^= var_8;
        var_23 = ((~(max((((arr_0 [i_2] [15]) ? (arr_1 [i_2]) : -1)), 1))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_24 = 25631;
                    var_25 *= (arr_11 [2]);
                }
            }
        }
        var_26 *= ((0 ? ((-(min(18446744073709551615, var_3)))) : ((((46584 || (((1 ? 15240 : 2922221756)))))))));
    }
    var_27 = var_10;
    #pragma endscop
}
