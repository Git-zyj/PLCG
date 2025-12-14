/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 ? (((var_8 + var_3) ? var_9 : var_9)) : (var_6 - 15057)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (arr_4 [i_0] [i_0] [i_0]);
            arr_7 [i_0] [i_0] = (max(190, (min((((var_1 ? (arr_5 [i_0] [1] [1]) : 5))), (arr_2 [i_1 - 1] [i_1 - 1])))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_14 = ((((min(0, (((arr_9 [19] [19]) ? (arr_2 [i_3] [4]) : var_10))))) ? ((~(-127 - 1))) : (arr_11 [1])));
                    arr_16 [i_0] [8] [14] [14] = (((((-var_6 ? -32767 : 32752))) ? ((+(((arr_8 [i_0]) ? (arr_5 [i_0] [i_0] [18]) : -8125098295615294954)))) : (arr_10 [i_0] [10] [i_3])));
                    arr_17 [i_0] [i_2] [i_2] = ((((arr_2 [i_3] [16]) ^ (arr_1 [i_2]))));
                    arr_18 [i_0] = ((1220178727 ? 372155666809364409 : -6));
                }
            }
        }
        var_15 = (min(var_15, 77));
    }
    #pragma endscop
}
