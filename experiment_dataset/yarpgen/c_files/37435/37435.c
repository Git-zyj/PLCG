/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (((((((arr_4 [i_0 + 1] [i_0 + 3]) ? (arr_4 [i_0 - 3] [i_0 + 2]) : (arr_4 [i_0 - 2] [i_0 - 3]))) + 2147483647)) >> (((~19) + 43))));
                arr_5 [i_0 - 2] [i_1] [i_1] = (max(2525469408925267282, 4294967295));

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_13 [i_0 + 3] [i_1] [i_2 + 3] [i_3] [i_1] [i_3] = (arr_8 [12] [i_2 - 1] [i_2 + 1] [i_2 + 4]);
                        arr_14 [i_0] [i_0] [i_1] [17] [i_3] = ((((max(1556125327, 18446744073709551615))) ? ((31130 ? 8820999190456808335 : 6522)) : ((min(0, 5)))));
                        var_17 = (((((arr_9 [i_2 - 1] [17] [i_2] [17] [i_3] [i_1]) ? (arr_9 [18] [i_2 + 3] [i_2 + 3] [i_2] [i_2 + 1] [i_2 + 1]) : (((arr_7 [1] [i_0]) ? 12 : (arr_0 [i_0 - 1])))))) ? (1 / 9223372036854775807) : (max((arr_8 [i_0 - 1] [i_1] [i_2 + 4] [i_2]), var_15)));
                        var_18 *= arr_0 [5];
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_19 *= (((max((arr_16 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 - 3]), var_7)) >> (((max(var_14, (max(4656151064395806970, 1)))) - 4656151064395806920))));
                                var_20 ^= (((arr_8 [i_4 + 1] [i_1] [i_0 - 1] [i_4]) ? (min((arr_8 [i_4 + 1] [i_1] [i_0 - 1] [i_4]), (arr_8 [i_4 + 1] [i_4 + 1] [i_0 - 1] [1]))) : (((arr_8 [i_4 + 1] [11] [i_0 - 1] [7]) ? (arr_8 [i_4 + 1] [i_1] [i_0 - 1] [i_4 + 1]) : 1))));
                            }
                        }
                    }
                    var_21 = (max(var_21, ((min((arr_2 [i_2] [15]), (((arr_12 [i_0 + 3]) ? (((max(39907, (arr_3 [i_2 - 2] [i_0]))))) : var_9)))))));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_22 = (min(var_22, (((((min(16363084951686623161, 70))) ? (arr_7 [i_0] [18]) : ((-(arr_0 [i_0 - 1]))))))));
                    var_23 = (~-63);
                }
            }
        }
    }
    var_24 = (((~(max(var_15, var_9)))));
    var_25 = var_10;
    var_26 = var_8;
    #pragma endscop
}
