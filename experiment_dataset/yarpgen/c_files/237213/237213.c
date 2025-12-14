/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_17 = (((arr_2 [i_0 + 4]) | var_2));
        arr_4 [i_0] |= ((-(arr_3 [i_0])));
        var_18 = 65535;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((((82 <= (((65535 ^ (arr_6 [i_1]))))))) >= (((arr_7 [i_1]) >> (3768228266 >= 3650720623)))));
        var_19 = ((-(max((arr_5 [i_1]), 11))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 9;i_5 += 1)
                {
                    {
                        var_20 += (arr_18 [2] [i_5 - 4] [i_5 + 1] [i_5 - 4] [2] [2]);

                        for (int i_6 = 3; i_6 < 7;i_6 += 1)
                        {
                            var_21 = (arr_5 [i_6 - 1]);
                            var_22 = ((arr_5 [i_6 + 3]) ? -65 : (arr_6 [i_2]));
                        }
                        var_23 = (((arr_16 [i_5 - 3] [i_5 - 4] [i_5 - 1] [i_5 + 1] [i_5 - 3] [i_5 + 1]) ? (arr_16 [i_5 - 2] [i_5 - 2] [i_5 - 1] [i_5 - 1] [i_5 - 4] [i_5 + 1]) : (arr_16 [i_5 - 4] [i_5 - 4] [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_5 - 2])));
                        var_24 *= var_2;
                        var_25 = 0;
                    }
                }
            }
        }
        arr_22 [i_2] [i_2] = ((~(arr_13 [i_2])));
        arr_23 [i_2] = (((arr_13 [i_2]) <= (arr_13 [i_2])));
    }
    var_26 ^= var_13;
    var_27 = var_0;

    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        arr_26 [i_7] [i_7] = (((min(var_14, (arr_5 [i_7]))) >= var_12));
        var_28 = (+(min((max((arr_18 [i_7] [i_7] [0] [i_7] [i_7] [i_7 + 1]), (arr_17 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))), -1596558676)));
    }
    #pragma endscop
}
