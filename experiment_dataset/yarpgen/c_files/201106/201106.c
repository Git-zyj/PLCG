/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_0] [i_2] = 9223372036854775792;
                    var_12 = (((arr_0 [i_0 + 1]) ? ((min((arr_1 [i_0 - 2]), (arr_0 [i_0])))) : ((9223372036854775807 ? -9223372036854775805 : 1))));
                    var_13 = (~((~(arr_5 [i_1] [i_0 - 2] [i_0 + 2]))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        var_14 = ((var_10 << (((((arr_10 [i_0 - 1] [i_0 + 1] [i_4 + 3] [i_0 - 1]) + 3316)) - 2))));
                        var_15 = ((((((arr_5 [i_0 - 1] [i_1] [i_4]) ? var_7 : 2147483647))) ? (((arr_4 [0] [i_1] [0]) + 65535)) : (arr_5 [i_0 + 1] [i_4 + 2] [i_4 - 2])));

                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            var_16 = (arr_1 [i_5 + 1]);
                            var_17 = (max(var_17, (arr_0 [i_1])));
                            var_18 = ((~(((arr_8 [8] [i_1] [8] [8]) ? 0 : var_5))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_19 |= var_4;
                                var_20 = 1;
                                arr_19 [i_0] [i_0 + 1] [i_0] [i_6] [i_0] = (arr_13 [i_0] [i_6] [i_0] [i_6] [i_0] [i_3] [i_0]);
                                arr_20 [i_0] [i_6] [i_1] [i_3] [i_6] [i_7] = (arr_1 [i_0]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_21 ^= ((var_8 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 1])));
                    var_22 = 254;
                }
                var_23 = 57;
            }
        }
    }
    #pragma endscop
}
