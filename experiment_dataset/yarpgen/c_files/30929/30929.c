/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;
    var_16 = (max(-var_9, var_4));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (max(var_17, ((min((max(15, (arr_2 [i_0] [i_0]))), (((~(arr_2 [i_0] [i_0])))))))));
        var_18 = (((((0 ? 4294967295 : -12749))) && (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = (((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) == (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_19 = ((1 ? 4 : 4294967291));
        arr_7 [2] [2] &= (min((((arr_5 [7] [1]) >> ((((4294967292 ? (arr_5 [i_1] [10]) : (arr_6 [10]))) - 1792132642)))), ((-(0 / 136989942)))));
        var_20 = (min(var_20, ((max((max((max((arr_5 [i_1] [i_1]), (arr_6 [i_1]))), (arr_6 [i_1]))), ((max((~var_14), (~var_5)))))))));
        var_21 = (((arr_4 [i_1] [i_1]) && ((((arr_5 [10] [i_1]) ? (arr_4 [i_1] [4]) : (arr_6 [i_1]))))));
    }
    var_22 &= (max((max(-var_13, ((var_8 ? var_12 : var_4)))), (max((4294967288 <= var_3), ((-1 ? var_3 : var_4))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            {
                arr_13 [3] = arr_12 [1] [i_3];
                arr_14 [i_2] [i_2] [i_3] = ((((4294967292 * ((((arr_8 [i_2] [1]) & (arr_9 [3] [12])))))) << (min(12, 986492981))));
            }
        }
    }
    #pragma endscop
}
