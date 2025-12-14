/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min((2958651359106757875 * -32216), (min(var_6, (min(25359, var_4)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = var_5;
                    var_13 = (((((((arr_6 [1] [i_1 + 1] [2] [i_1]) + 9223372036854775807)) << (64 - 64))) >= var_4));
                    var_14 = (((((70 >> (-65 + 80)))) || (((var_8 << (((var_9 + 3138701920081884980) - 7)))))));
                    arr_8 [i_0] = (arr_2 [i_2] [i_0]);
                    var_15 = var_10;
                }
            }
        }
        var_16 = var_2;
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        var_17 = (min(var_17, (((+(min((64 + 1), var_7)))))));
        var_18 = var_4;
        var_19 += ((var_4 ^ (arr_9 [i_3])));
    }
    var_20 = (((((min(var_9, 1380) <= (-65 == 1391))))));
    var_21 = ((~((((max(-49, var_2)) > var_2)))));
    #pragma endscop
}
