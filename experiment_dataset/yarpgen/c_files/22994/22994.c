/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 -= (!(((44325 * (arr_1 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_15 = (!-5253617725251154180);
                                var_16 = (!2147483647);
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 24;i_5 += 1)
                            {
                                var_17 = ((65535 < ((((arr_3 [i_5] [i_1]) == 44325)))));
                                var_18 = (21210 || var_2);
                                var_19 = (((!0) ? -3228215416929018474 : 65532));
                            }
                            var_20 = ((0 ? (((((min((arr_14 [i_0] [23] [i_2] [1] [i_2]), var_0)) == -1407296864)))) : ((1212733347 ? 3947528867 : 2061373697))));
                            var_21 = ((var_5 >= (((((21211 ? var_1 : 21232))) ^ 1212733355))));
                        }
                    }
                }
                arr_15 [11] [11] [19] = var_6;
            }
        }
    }
    var_22 += -1320561404;
    var_23 = (((((((var_0 << (((var_3 + 43) - 24))))) ? (min(var_9, 363354453192347355)) : (((4 ? 9223372036854775807 : 2988051178)))))) ? var_4 : (((((var_13 << (var_9 - 27923)))))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            {
                var_24 = (min(((((min(var_10, 238425146))) ? (((arr_8 [i_6] [i_6] [i_6] [11]) ? 930363809 : 1213378798603481241)) : (((37 ? 121 : var_7))))), (((((min(133693440, var_1))) ? (!var_1) : (!35888059530608640))))));
                var_25 = (min(var_25, ((max((min(((2407 ? var_11 : 6)), ((((arr_8 [i_6] [1] [i_7] [i_6]) & 0))))), var_5)))));
                var_26 = ((min((arr_11 [i_6] [i_6] [i_6] [19]), (arr_11 [i_6] [i_6] [i_7] [i_7]))));
                var_27 = var_2;
            }
        }
    }
    #pragma endscop
}
