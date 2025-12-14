/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = -var_3;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_12 = (min(var_12, var_4));
                    var_13 *= (!var_1);

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_14 = -13;
                        var_15 = -8;
                        var_16 = (max(var_16, var_2));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_17 ^= 1391665764;

                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            var_18 = var_3;
                            arr_16 [i_0] [i_1] = var_1;
                            var_19 ^= 3617100844;
                            var_20 = (~(~var_3));
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_21 *= ((-(~-1391665749)));
                            arr_19 [i_0] [i_4] [i_2] [i_0] [i_0] = (var_8 ? -2002920882 : var_4);
                            var_22 = var_3;
                            var_23 = (min(var_23, (~var_0)));
                            var_24 = (~var_8);
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_25 += ((var_7 ? (!var_0) : var_4));
                            var_26 = (min(var_26, (((36404 ? 3532991238552614457 : -1)))));
                            arr_23 [i_0] [i_0] [i_0] [i_4] [i_7] = ((~(~var_5)));
                        }
                        var_27 = var_2;
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_28 |= ((7 ? var_3 : (var_10 % var_4)));
                                var_29 = (var_1 * 71);
                            }
                        }
                    }
                }
                var_30 = (min(var_30, var_7));
                arr_28 [i_0] [i_1 - 2] [i_0] = (((~var_2) ? var_5 : -9712));
                var_31 = (!((((((var_6 ? var_4 : var_1))) ? var_7 : (~var_4)))));
            }
        }
    }
    var_32 = (min(var_32, ((min((!var_6), ((var_5 ? var_1 : var_10)))))));
    var_33 = (max(var_33, ((max(((((127 ? var_2 : var_10)) - var_9)), ((((min(var_7, var_2))) ? (var_5 < var_7) : 8483)))))));
    #pragma endscop
}
