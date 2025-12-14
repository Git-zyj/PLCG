/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((min(((min((min((-127 - 1), 0)), 1))), -2147483632)))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_16 = (max((min((var_4 ^ var_1), -var_0)), (((!(((var_13 ? 1416462316 : 591074420595371158))))))));
                                var_17 &= (((~4261412864) ? (~18446744073709551615) : ((max(((1 ? 766361558004803086 : var_6)), (((2878505001 ? 1792 : var_11))))))));
                            }
                            var_18 ^= (min((min((((var_6 ? -1 : -25))), 5698260424178352179)), (!var_11)));
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_17 [i_0] [i_0] [i_0] [i_0] = (((((var_2 ? var_12 : 18446744073709551615))) ? ((var_1 ? 2878504979 : 1)) : (((var_1 / (-2147483647 - 1))))));
                    var_19 = ((7967794788329937577 ? var_8 : 0));
                    arr_18 [i_5] [i_1] [i_0] = ((52 ? (((var_1 ? var_1 : var_12))) : ((var_3 ? var_13 : 6906435206301818468))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_22 [i_6] [i_6] = ((-(31 / var_3)));
        var_20 = 18446744073709551584;
        var_21 *= -4032;
    }

    for (int i_7 = 2; i_7 < 8;i_7 += 1)
    {
        var_22 = -2147483624;
        arr_25 [i_7] &= ((min(var_10, var_11)));
        arr_26 [i_7] = ((((!(((586822094 ? var_4 : var_10))))) ? (!-2147483632) : (64 ^ 1)));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_23 = var_5;
        var_24 ^= var_11;
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 19;i_9 += 1)
    {
        arr_33 [i_9] = var_13;

        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            arr_36 [i_9] [i_9] = ((var_10 ? 64 : (var_6 >= 0)));
            var_25 = (((8156 - -8941) ? var_14 : -49));
        }
        arr_37 [i_9] = ((!(((var_14 >> (4383505770169568549 - 4383505770169568531))))));
        var_26 *= ((12561134817108066906 ? 1008 : 34829));
    }
    #pragma endscop
}
