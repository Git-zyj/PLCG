/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 != (((18446744073709551610 ^ 13686) ^ (~var_4)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);
        arr_3 [i_0] = ((((max((arr_2 [i_0]), (((16744448 && (arr_0 [i_0]))))))) ? (((min((arr_0 [i_0]), (arr_2 [i_0]))))) : (min(((220666215 ? var_3 : 0)), 28))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((((arr_1 [i_1] [i_1 + 1]) + (arr_1 [i_1] [i_1 + 1]))) << (((max(220666213, (arr_1 [i_1] [i_1 + 1]))) - 2326282650728161181))));
        arr_7 [i_1 + 1] [i_1] = (arr_2 [i_1 + 1]);
        var_12 = ((((-8615158701310932663 ? 231 : -8615158701310932689)) <= 4522195246373176638));
        var_13 = (min(var_13, (4294967295 | 950170740725429984)));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                var_14 -= ((((18446744073709551615 ? 37132 : (arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) == (var_4 < var_4)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 7;i_5 += 1)
                    {
                        {
                            var_15 = var_1;
                            var_16 &= ((arr_0 [i_1 + 1]) >> (((arr_0 [i_1 + 1]) - 243)));
                        }
                    }
                }
                var_17 = (((arr_4 [i_1 - 1]) ? var_6 : var_7));
                var_18 = (((arr_12 [i_1] [i_2] [i_3 + 1]) | (arr_12 [i_1] [i_1] [i_1])));
            }
            arr_18 [i_1] [i_2] = (arr_12 [i_1 + 1] [i_1 + 1] [i_1 - 1]);
            arr_19 [i_1] [9] [i_1] = ((!(14 < 4522195246373176642)));
        }
    }
    #pragma endscop
}
