/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_3, (~var_6)));
    var_17 = var_12;
    var_18 = (max(var_18, ((((var_0 < (!var_11))) ? (~-7006997957903981501) : ((min((min(4294967285, -100)), (15333284773134844355 <= 15333284773134844358))))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_19 = (~var_15);
            var_20 *= ((-(max((min((arr_1 [i_1]), var_13)), ((min(var_14, (arr_2 [1]))))))));
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            arr_6 [i_0 + 2] [i_0 + 2] [i_0] &= (max((((arr_3 [i_0 + 3]) ? (arr_3 [i_0 + 3]) : (arr_3 [i_0 + 3]))), 1216366892309714274));
            var_21 -= var_15;
            var_22 ^= (min(var_9, (((var_14 ? 123 : (arr_1 [i_2 + 1]))))));
            var_23 = ((!(52264 | var_1)));
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_24 = (max(((-1 ? 1 : (arr_9 [i_0 + 3]))), ((max((arr_7 [i_3 + 3] [i_0 - 2] [i_0 + 2]), -28581)))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_25 += -2302;
                arr_14 [1] [1] [1] = (-((((arr_11 [i_0 - 1] [10] [i_4]) > 54))));
                var_26 = (((arr_7 [i_0 + 2] [i_3 + 1] [i_3 + 2]) ? ((70368744177600 ? 23 : var_4)) : var_10));
            }
        }

        /* vectorizable */
        for (int i_5 = 3; i_5 < 14;i_5 += 1)
        {
            var_27 *= var_2;
            var_28 = ((-1709862613 / (arr_9 [i_0])));

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                var_29 = (!24);
                var_30 *= var_3;
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_30 [i_9 + 1] [i_8] [0] [2] [2] = (((arr_10 [i_0 + 1] [i_5 + 2] [i_9 - 2]) ? (arr_11 [i_0 + 1] [i_5 + 2] [i_9 - 1]) : 140673627));
                            var_31 = (var_10 < 1216366892309714251);
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 14;i_10 += 1) /* same iter space */
    {
        var_32 ^= -7579142985250452622;
        var_33 *= 1;
        var_34 *= -var_2;
    }
    var_35 = var_2;
    #pragma endscop
}
