/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_14 = 30706;
                    arr_9 [5] [5] [i_1] = ((!(arr_7 [i_0] [i_0] [i_2])));
                    var_15 = (min(var_15, (arr_6 [i_1] [6])));
                    arr_10 [i_2] [i_1] [i_2] [i_1 - 1] = (min(var_6, (arr_0 [11] [i_1 + 2])));

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_16 = ((3099132772102330335 ? 9 : 154));

                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            var_17 = 112;
                            arr_16 [i_0] [8] [i_2] [10] [i_4] = (arr_7 [i_3] [i_2] [i_0]);
                            arr_17 [i_2] [2] [i_2] [1] [i_0] = (arr_1 [i_1]);
                            var_18 = (min((min((((arr_4 [i_0]) ? var_7 : var_11)), ((15347611301607221280 ? (arr_7 [i_4 - 1] [i_4] [i_4]) : var_0)))), ((var_5 ? 9223372036854775807 : ((1 ? (arr_8 [10] [i_3 + 2] [i_0]) : (arr_2 [i_1])))))));
                        }
                        arr_18 [i_2] [i_1 - 1] [i_1] [i_3] [11] [i_0] = (((((-16 ? -var_10 : (((arr_0 [i_1] [9]) - -1808331741313802219))))) ? (((((var_2 ? -17 : var_12))) ? var_12 : (arr_0 [i_1 + 3] [i_1 + 2]))) : var_10));
                    }
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        arr_22 [7] [7] = (((min(-30707, (((arr_19 [i_0] [i_5 - 2] [2]) ? 32767 : var_13)))) <= 120));
                        arr_23 [3] [i_1] [i_1 + 3] [i_1] [i_1] [i_1 + 3] = ((((var_5 != (var_13 <= var_0))) ? ((((((arr_14 [i_0] [i_1] [i_1]) ? var_11 : var_2))) ? 32767 : -var_5)) : ((~(arr_6 [12] [11])))));
                    }
                }
                arr_24 [i_0] [i_1 + 1] = (((arr_11 [6] [i_1] [i_0] [5]) ? (((min((arr_12 [i_0] [8] [i_0] [i_0] [i_0]), var_12)))) : (arr_13 [10])));
            }
        }
    }
    var_19 &= var_10;
    var_20 = (max(var_20, ((((-9223372036854775785 / 6459) ? var_7 : ((((min(var_0, var_1))) ? var_12 : var_11)))))));
    #pragma endscop
}
