/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 ? var_6 : (((((~282332135) >= var_7))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = -1833236718;
        var_14 *= var_0;
        var_15 = ((-((min((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_10 [21] = (297061035574693932 == -1);
            var_16 += -4294967295;
            var_17 = var_10;
            arr_11 [i_1] [i_2] [i_2] = -6443428452207016163;
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_14 [i_1] = (-0 / 562949953421311);
            arr_15 [i_3] [i_1] [i_1] = ((!((((((61530 << (4058308038 - 4058308030)))) ? -24 : ((6710621930086207008 ? var_11 : var_9)))))));
            var_18 = -74037510;
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_19 = ((-((-(arr_2 [i_4 + 1])))));
                    arr_21 [i_1] [i_4] [13] [i_5] = ((-(--1699)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_20 = (max(((138 ? var_9 : (((arr_12 [i_1] [i_4 - 1] [i_1]) ? 1231 : 0)))), ((-(!var_6)))));
                                arr_26 [i_1] [i_4] = -12455;
                                var_21 &= (!18446744073709551607);
                            }
                        }
                    }
                    var_22 = var_0;
                }
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
