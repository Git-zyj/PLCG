/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 83;
    var_16 ^= ((var_8 ? var_6 : 37608));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 += ((!(((20030 ? (arr_0 [i_0]) : (((var_8 + 2147483647) << (50550 - 50550))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_1] = -772186925;
            arr_6 [i_0] [i_1] [i_0] = (~-50);
        }
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            arr_9 [i_2] [i_0] = var_6;
            arr_10 [i_0] [20] [i_2] = (((~(arr_0 [i_2 - 1]))));
            arr_11 [i_2] [i_2] [i_0] = 1;
        }
        var_18 ^= (max((arr_4 [i_0] [i_0]), (((((-4685666382376688515 ? -1 : -1021632290))) ? 5 : (min(-1021632284, -4648102320940419802))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 17;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_19 = (max(4294967272, (arr_16 [i_0] [i_3] [i_4 + 1] [11])));
                        arr_20 [i_4] [i_5] = var_12;
                        arr_21 [i_0] [i_0] [i_0] [7] [i_4 - 2] [i_0] = ((((10 <= ((var_6 ? 65535 : (arr_19 [i_0] [i_4 + 4] [i_5] [i_5] [i_0] [i_0]))))) ? (508 - -7) : (max((((arr_13 [i_3] [i_0] [i_3]) + 60)), var_10))));
                    }
                    var_20 = (max(var_20, ((-37 ? (0 + 30734) : (arr_17 [i_0] [i_3] [i_4])))));
                    arr_22 [i_0] = 165;
                    var_21 = ((((((arr_8 [i_4 - 3]) ? (arr_19 [14] [i_3] [i_3] [i_3] [i_4 - 4] [i_4 + 3]) : (arr_8 [i_4 + 2])))) || ((((((arr_18 [i_3] [i_3] [i_3]) ? (arr_0 [i_0]) : 34789)) - var_3)))));
                }
            }
        }
        var_22 += var_1;
    }
    #pragma endscop
}
