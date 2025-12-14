/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = 8188267634847613752;
        arr_4 [i_0] = (((-8471 & 14807947526608384790) / (~866504656316907311)));
        arr_5 [i_0] = (((arr_1 [i_0]) ? (((8471 ? (((arr_2 [1]) ? (arr_1 [i_0]) : 11492)) : ((var_9 ? (arr_0 [i_0]) : (arr_0 [i_0])))))) : (((var_5 / (arr_0 [i_0]))))));
        var_18 = (min(var_18, ((((arr_0 [i_0]) ? (~36673) : var_5)))));
        arr_6 [i_0] [i_0] = 6689299342521533553;
    }
    var_19 |= ((((var_9 << (((max(var_13, var_5)) - 3402976974139113450))))) ? ((max(var_7, 18446744073709551612))) : -30806);
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            {
                arr_11 [i_2] [i_2 - 1] = ((~(max(((var_17 ^ (arr_7 [i_1] [i_2]))), -8479))));
                var_20 = ((~(arr_8 [i_1])));
            }
        }
    }
    #pragma endscop
}
