/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, 18446744073709551615));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = (max(var_18, (9008664924308273625 <= 4040409473)));
                        arr_8 [i_3] [i_1] [i_2] [i_3] = ((~(((((var_1 * (arr_3 [i_1] [i_1])))) ? 9008664924308273630 : ((1114121333 ? 7840760755673629359 : -666464815))))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [2] [i_2] [i_0] [i_0] = (((arr_4 [i_0] [i_0] [i_2] [i_2]) ? (arr_12 [i_5 + 1] [i_5 + 2] [i_5] [i_5 - 4] [i_5 + 1] [i_5]) : 13687852636380630974));
                            arr_16 [i_5 + 1] [i_4] [16] [13] = ((~(arr_11 [i_1])));
                            var_19 = (min(var_19, (~57445)));
                            var_20 = ((var_14 ? (arr_5 [i_5 - 3] [i_5 + 3]) : var_10));
                        }
                        for (int i_6 = 4; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_0] = (arr_12 [i_0] [i_1] [10] [10] [13] [i_6]);
                            arr_21 [i_0] [4] [i_2] [i_4] [i_6] = (min(9008664924308273620, -2048));
                            var_21 -= (min((arr_3 [i_1] [1]), var_0));
                        }
                        var_22 *= min((((min(-666464827, 8126464)) + (arr_11 [i_2]))), ((min(((49152 ? 4458 : 8097)), (~-666464827)))));
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, var_16));
    var_24 += 666464826;
    #pragma endscop
}
