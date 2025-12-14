/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = var_1;
        var_13 ^= (((((var_9 << (((87 ^ var_1) + 8577617914771409961))))) ? var_9 : -var_9));
        var_14 = ((+(((var_5 == (((var_1 + 9223372036854775807) << (var_6 - 55800))))))));
    }
    var_15 &= (((-(~var_3))));
    var_16 = (var_5 & 97);
    var_17 = ((-((var_9 - (var_8 >= -91)))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                arr_8 [i_1] [i_1] = (!((((~var_1) ? var_4 : var_7))));
                var_18 = (((((var_11 + (~var_1)))) ? ((var_11 ^ (!var_2))) : ((((!(~var_7)))))));

                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_11 [i_3] [i_2] [i_1] [i_1] = (((((~0) + 2147483647)) << (((~-3433297060454372992) - 3433297060454372991))));
                    var_19 += ((-(((var_0 ^ var_7) % var_9))));
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_21 [i_1] [i_1] [i_1] [i_1] = 24617;
                                arr_22 [i_1] [15] [i_4] [i_5] = var_3;
                                var_20 = ((-((var_8 << (var_5 - 109)))));
                            }
                        }
                    }
                    var_21 = (((((var_5 ? var_2 : var_7)))));
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_22 *= (((~(!821066647))));
                    arr_27 [i_1] = (-var_1 || 914479746);
                }
                var_23 = (min(var_23, ((((!-var_9) ? ((4 ? (!var_10) : ((var_5 ? var_5 : var_4)))) : (-var_2 + var_4))))));
            }
        }
    }
    #pragma endscop
}
