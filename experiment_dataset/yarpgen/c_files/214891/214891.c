/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_12 = (arr_2 [i_0 - 2]);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            var_13 = ((!(((arr_9 [i_1 + 1] [i_3 + 1] [i_1 + 1] [i_1 - 1] [i_0]) || (arr_9 [i_1] [i_3 - 2] [i_1 + 1] [i_1] [i_1])))));
                            var_14 = (min(var_14, ((max(0, ((-var_0 ? 0 : (arr_10 [i_0] [i_1] [i_2] [i_1]))))))));
                            var_15 = (min(var_15, 0));
                            var_16 -= (arr_7 [i_3] [i_3] [i_2] [i_3]);
                            var_17 -= (max(-0, (((10 << (2147483647 - 2147483631))))));
                        }
                        var_18 = (min(var_18, ((max(0, ((~(-2147483647 - 1))))))));
                        var_19 = (((-((max(65526, var_6))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                {
                    var_20 -= (min(var_10, ((((arr_14 [i_5]) * (((!(-2147483647 - 1)))))))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_21 -= var_6;
                        var_22 = -464766422;
                        arr_20 [i_7] [i_0] [i_5] [i_0] [i_0] [i_7] |= var_2;
                        var_23 = ((~(arr_7 [i_0] [i_5] [i_6 + 1] [i_0])));
                        arr_21 [i_5] [i_6] [i_0] = (((-2147483647 - 1) ? 2147483633 : -8));
                    }
                }
            }
        }
        var_24 += ((((max(((9223372036854775807 ? (arr_18 [i_0] [i_0] [i_0] [20]) : (arr_16 [0] [i_0] [i_0]))), var_8))) ? (((max(var_3, var_5)))) : (arr_8 [20] [20] [20] [20])));
    }
    var_25 = var_4;
    #pragma endscop
}
