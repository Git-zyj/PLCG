/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = ((((((127 >> var_12) ? (arr_8 [i_3 + 3] [i_3] [i_3 + 3] [i_2] [i_4 - 3]) : (var_5 - -9117148734227238597)))) ? ((min(((min((arr_7 [i_2] [i_2] [i_3] [i_4]), -1830424552))), (arr_8 [i_0] [7] [i_2] [i_2] [i_4 - 2])))) : (9106160736894579793 << 0)));
                                var_16 = (min(var_16, ((min(-9117148734227238597, 9117148734227238596)))));
                                var_17 = ((6653788938475562994 ? (((min((arr_2 [i_0]), ((min(249, 162))))))) : var_9));
                                arr_13 [i_2] [i_3] [i_1] [i_1] [i_2] = (min(91, 9117148734227238597));
                                arr_14 [i_0] [i_1] [i_2] [19] [i_4] [i_2] = ((~(~-9117148734227238597)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_18 = 57568;
                            var_19 = (max(var_19, (((min(-2053884003, (max(9106160736894579793, 38052)))) / 84))));
                            var_20 -= (arr_0 [i_0]);
                        }
                    }
                }
                var_21 = (min(var_21, (arr_9 [16] [i_1] [i_1] [i_1])));
                var_22 = (min(var_22, (((((((1992608048 < -9117148734227238597) ? var_1 : -56))) ? ((2097151 ? (arr_8 [i_0] [i_0] [i_1] [i_0] [i_1]) : -9117148734227238597)) : var_0)))));
            }
        }
    }
    var_23 = -2086421118980956491;
    var_24 = (!27483);
    var_25 = (min(var_25, (((!(9106160736894579793 * 2054977040))))));
    #pragma endscop
}
