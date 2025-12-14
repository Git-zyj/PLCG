/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((((var_0 ? 6130203733966833176 : 1))) ? -37 : (min(3551358415, 13755895571535000278))))) ? (max(var_9, var_7)) : var_6));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (((~17021779593484321114) ? (arr_4 [i_0] [i_0] [i_0]) : (min(-1151131429, 4913734949696536764))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_13 = var_6;
                        arr_10 [i_0] [i_1] [5] [i_2] = (+(((arr_1 [i_3] [i_0]) + 4913734949696536762)));

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            var_14 = (max(var_14, (~4913734949696536762)));
                            var_15 = (min(var_15, ((((((0 ? 4913734949696536762 : 30720))) ? var_2 : (-1244256856 + var_0))))));
                        }
                        var_16 = (!var_4);
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            var_17 ^= 0;
                            var_18 = ((~(arr_7 [i_2])));
                            arr_19 [i_1] [i_2] [i_1] [i_1] [i_1] = (arr_1 [i_1] [i_2]);
                        }
                        var_19 ^= ((!(arr_8 [i_0])));
                        arr_20 [i_1] [i_1] [i_2] [0] [i_0] = 13533009124013014851;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_20 = ((148738596 ? 1 : var_8));
                        var_21 = (((255 - 8054720177270782796) * 0));
                    }
                    var_22 = ((!((((((arr_12 [i_0] [i_0] [i_1] [i_2] [i_2]) ? (arr_13 [7] [7] [i_2] [7]) : var_9)) ^ (max(1244256853, 4294967295)))))));
                    var_23 = (arr_14 [i_0] [i_1] [i_2] [i_1]);
                }
            }
        }
        arr_24 [i_0] = ((((((((~(arr_9 [i_0] [4] [10] [i_0])))) ? (var_3 * 13493) : (max(var_0, var_8))))) & 433545845));
        var_24 *= ((((((arr_3 [i_0] [i_0] [i_0]) ? (arr_21 [i_0] [4] [i_0] [i_0] [i_0]) : (arr_18 [i_0] [0] [0])))) ? (-1151131429 <= 10392023896438768823) : (((8054720177270782792 / 1244256856) ? (((5 ? var_0 : 1))) : ((18446744073709551615 - (arr_4 [4] [i_0] [i_0])))))));
        var_25 = (((((~var_1) % ((((arr_9 [i_0] [8] [8] [i_0]) ? 7429 : var_4)))))) ? (((1 ? (-2147483647 - 1) : 3984968981))) : (-106 > -var_10));
        arr_25 [i_0] = 1;
    }
    #pragma endscop
}
