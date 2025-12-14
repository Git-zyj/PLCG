/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 + 2] [i_1] |= (((max((((arr_0 [i_0]) / (arr_3 [10] [i_0] [i_1]))), 9)) - (min((arr_3 [19] [i_0] [i_1]), var_6))));
                var_14 = ((~((-(((var_9 || (arr_0 [i_1]))))))));
            }
        }
    }
    var_15 = (var_12 <= var_10);
    var_16 = (min(11437247940637630253, (((var_11 ? var_3 : (!var_1))))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_17 = ((((6852117322642458272 * (((max(var_7, (arr_7 [i_2]))))))) ^ 105));
                            var_18 = (((((1514561287118627950 != var_5) && var_5)) ? (min(((min(var_11, var_11))), (min(-127, 1514561287118627974)))) : (arr_7 [i_2])));
                            var_19 = (max((min((arr_7 [i_2 - 1]), (max(1063694285, var_7)))), (((1514561287118627943 != (18 != -2132871192872252675))))));
                        }
                    }
                }
                var_20 = (((((-(arr_15 [i_2 - 1] [i_3 + 1] [i_3] [i_3 + 1])))) ? (!-2132871192872252660) : ((((-22643 ? var_9 : 18446744073709551615))))));
                var_21 = ((!(arr_14 [i_3] [i_3] [i_2 - 2])));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_23 [i_3] [i_6] [i_6] [i_3 - 1] [i_3] [i_3] = ((-((((((var_11 % (arr_6 [i_6])))) && ((min(var_4, (arr_21 [i_2] [15] [12] [i_7])))))))));
                            var_22 = var_0;
                            var_23 *= ((((((arr_8 [i_2 - 1] [i_3 + 2]) ? (arr_8 [i_2 - 1] [i_3 + 2]) : (arr_8 [i_2 - 1] [i_3 + 2])))) || ((max((arr_8 [i_2 - 1] [i_3 + 2]), var_6)))));
                            var_24 = (arr_6 [i_3]);
                            var_25 = (min(var_25, (((((max(-226155280200816074, ((((arr_9 [i_2]) ? (arr_22 [i_2] [i_2] [i_6 + 3]) : var_6)))))) ^ var_12)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
