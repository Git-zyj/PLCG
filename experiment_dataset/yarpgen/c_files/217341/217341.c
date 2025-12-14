/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_13 = (arr_4 [i_0]);
                        arr_9 [i_0] [i_1 + 1] [i_2] = ((-1 - (arr_8 [i_0] [i_1] [i_1 - 1])));
                        var_14 = (((arr_2 [i_1] [i_1 + 2]) ? (arr_7 [i_1] [i_1 - 1] [i_1 - 1]) : (arr_0 [i_1 + 2])));
                        var_15 *= (arr_6 [i_0] [6]);

                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            var_16 = ((var_12 > (((arr_7 [i_0] [i_1] [i_0]) - -48))));
                            arr_12 [8] [i_4] [i_4] [i_3] [i_4] [8] [12] = (((arr_6 [i_0] [i_4 + 2]) + (arr_4 [i_3])));
                            var_17 = (max(var_17, ((((4294967295 - var_9) % (arr_0 [i_0]))))));
                            arr_13 [i_4] [i_4] [i_4] [i_4] [13] [i_4] = (((((var_5 - (arr_6 [i_0] [i_0])))) ? 1598962266477216522 : var_4));
                            var_18 = (max(var_18, (var_11 <= var_1)));
                        }
                    }
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        var_19 = (min(var_19, ((((((arr_6 [i_1] [i_5]) || 1598962266477216531))) % 239))));
                        var_20 = ((((5503 || (arr_1 [i_0])))));
                    }
                    arr_16 [15] [15] [i_2] [15] = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_17 [i_2] [i_2] [i_1] [i_0] = 16847781807232335086;
                }
            }
        }
    }
    var_21 = (var_2 ^ var_1);
    var_22 = (min(var_22, (((var_7 ^ (var_6 <= var_0))))));
    #pragma endscop
}
