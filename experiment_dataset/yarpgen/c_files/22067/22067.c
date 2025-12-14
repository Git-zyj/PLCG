/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = (~0);
        var_11 = var_8;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {
                arr_6 [4] [i_2] = (arr_2 [i_1] [i_1]);
                var_12 = (max(var_12, (((((((160 >= 7183566751908796216) != ((0 ? 1635204845 : (arr_4 [i_1] [2])))))) & (((arr_3 [i_1]) ? ((95 << (2163751221 - 2163751216))) : (((arr_4 [i_2] [7]) ? var_9 : var_0)))))))));
                var_13 = ((((1 ? ((95 ? var_1 : var_4)) : var_7)) % (--95)));
                arr_7 [i_1] [i_1] = ((161 ? var_5 : (((120 ? 96 : (arr_3 [i_2]))))));
            }
        }
    }
    #pragma endscop
}
