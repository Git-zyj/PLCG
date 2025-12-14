/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((!var_4) << (var_9 + 3017820514907756817)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_2] [0] [i_2] = (((max((max(var_5, 11)), var_8)) >= 277701298));
                    arr_9 [i_0] [i_1] [2] [i_2] = ((((~(arr_6 [i_1 + 2] [i_2] [i_1 + 1]))) - ((var_2 ? (arr_6 [i_1 + 1] [i_2] [i_1 + 2]) : (arr_6 [i_1 + 1] [i_2] [i_1 - 2])))));
                    var_16 = (min(var_16, ((((arr_5 [i_0] [8]) ? 9223371899415822336 : var_12)))));
                    var_17 = (((((((((((arr_6 [2] [i_2] [i_2]) != (arr_4 [i_2] [5] [5]))))) != (((arr_1 [5] [i_1]) ? var_8 : var_5)))))) * 4017265998));
                }
            }
        }
    }
    var_18 = (max(var_18, 0));
    var_19 = (max((((var_2 ? (((var_3 >> (70368744161280 - 70368744161251)))) : (max(var_13, var_0))))), (max((min(var_9, var_0)), (max(var_9, var_3))))));
    #pragma endscop
}
