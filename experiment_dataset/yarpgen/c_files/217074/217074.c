/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 -= (7 < 604912549);
                var_21 = var_11;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_22 = -1426975008;
                            var_23 = (arr_7 [i_3] [i_3] [i_1] [i_1] [i_1] [i_0]);
                            var_24 -= 255;
                        }
                    }
                }
                arr_9 [i_1] [i_1] [i_1] = (min(((2147483633 ? (arr_4 [i_0] [i_0 - 1] [i_0 - 1]) : (arr_8 [i_1] [i_1] [i_0 - 1] [i_1]))), (((((arr_4 [i_1] [i_1] [i_0]) ? 8790228002017454251 : var_13))))));
            }
        }
    }

    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_15 [i_4] = 1372999157437782671;
            arr_16 [20] [i_4 + 2] [i_5] = ((-var_1 ? ((var_19 * ((1426975015 ? 3 : 232)))) : (((((!(arr_13 [i_5]))) && ((max(3690054746, (arr_12 [i_5] [5])))))))));
        }
        var_25 -= (((((~((var_8 & (-127 - 1)))))) ? (((min((!var_18), var_17)))) : (((((arr_14 [i_4] [i_4]) | (arr_14 [1] [i_4]))) | (((~(arr_10 [1] [i_4]))))))));
    }
    var_26 |= ((((-(~var_18))) >> (((min(var_12, var_16)) - 33))));
    #pragma endscop
}
