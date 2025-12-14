/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((!0) || (var_8 && var_8)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 += (min(((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))), (arr_0 [i_0] [i_0])));
        var_13 = ((+(((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0] [i_0]) - 86))))));
        var_14 = (min(var_14, var_1));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_1] = (((((arr_6 [i_1]) ^ (arr_0 [i_1] [i_2]))) + (((6 && (arr_7 [i_1] [i_1 - 1] [i_1]))))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_15 = (max(var_15, ((((((arr_12 [i_1] [i_2] [i_3 + 1] [i_4]) ? (arr_3 [18] [i_4]) : (arr_1 [i_3 + 1] [i_1]))) > (((0 * (arr_5 [i_3])))))))));
                        var_16 = (min(var_16, ((((-11491 - (arr_5 [i_4]))) * (arr_12 [i_1] [i_4] [i_2] [i_3 - 1])))));
                    }
                }
            }
            var_17 = (min(var_17, (((-9128 && (arr_1 [i_1 + 1] [i_2]))))));
            arr_14 [i_1] [i_2] = arr_11 [i_1] [4] [i_1 + 1] [9] [9] [i_2];
        }
        var_18 += (+(((arr_1 [i_1] [i_1 - 1]) ^ var_7)));
    }
    var_19 |= ((var_1 && ((max(-7950102519523123232, 7404)))));
    var_20 ^= ((var_5 >= (((176 != 2999501856) % (var_0 % 2048)))));
    #pragma endscop
}
