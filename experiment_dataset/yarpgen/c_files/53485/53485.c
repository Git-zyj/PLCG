/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_13 = (arr_7 [9] [i_3] [i_2] [7] [i_1] [i_0 + 1]);
                        var_14 = (((((-(arr_4 [i_2 + 1])))) ^ (min((arr_4 [i_2 + 1]), (arr_3 [i_1 - 3] [i_1 - 3])))));
                        var_15 ^= ((-((min((arr_0 [i_0] [1]), (arr_8 [1] [1] [i_1 - 2] [i_2 - 1] [i_1 - 2]))))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_16 *= max(9, ((-(arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_1 - 1] [i_2 + 2]))));
                        var_17 = (min(((-128 ? 405387201561743370 : (arr_5 [8] [5] [4] [i_4]))), 182656657));
                        var_18 = ((((arr_5 [i_1] [1] [i_1] [i_1 - 3]) > (arr_5 [i_1] [i_1] [i_1] [i_1 - 3]))));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 7;i_5 += 1)
                    {
                        var_19 = (min(var_19, (14933295989287108574 / 128)));
                        var_20 = (min(var_20, (1073741824 != 117)));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_21 = (min((arr_8 [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2]), ((max(128, -128)))));
                        var_22 += ((((119 ? 1 : 1998499253)) % (((arr_9 [i_1 - 2]) * 12284))));
                    }
                    var_23 = (max(var_23, (arr_15 [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            {
                var_24 = (min(var_24, ((min((min((arr_21 [i_8 + 1]), var_10)), 16125007380464031938)))));
                arr_23 [i_8] [i_8] &= (max((arr_20 [i_8 + 2] [i_8]), var_2));
                arr_24 [i_7] [i_8 + 2] [i_7] = (((((arr_20 [7] [i_8 + 1]) ? 128 : -2135541482)) - (max(1998499253, 9014537608785556796))));
                arr_25 [i_7] [i_8 + 3] &= (min((~21), (((arr_18 [i_8 + 3] [i_8 + 3]) ? -2079583188 : (arr_18 [i_8 + 2] [i_7])))));
            }
        }
    }
    #pragma endscop
}
