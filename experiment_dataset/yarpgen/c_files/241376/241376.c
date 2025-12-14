/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [1] = (((((((var_17 == (arr_1 [i_0] [i_0]))) ? var_16 : var_5))) ? var_18 : ((~(min(var_12, var_19))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 = var_15;

            /* vectorizable */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_15 [i_4] [1] [i_0] [i_0] [i_0] = (((((-32767 - 1) ? (-32767 - 1) : var_9)) >= -109));
                            var_21 = ((var_9 ^ (arr_3 [i_0] [i_1] [i_4])));
                            var_22 = var_12;
                        }
                    }
                }
                var_23 = (51 % -6505030476516194286);
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_6] [i_0] = (var_17 / -1);
                            arr_25 [i_7] [i_7] [i_6] [17] [i_6] [13] [i_0] = ((var_6 ? (arr_14 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 1]) : (arr_14 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1])));
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_24 = (min(var_24, (((var_4 ? (~var_9) : (var_14 - var_14))))));
                    var_25 *= var_11;
                }
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    arr_31 [i_0] [i_0] [i_0] [i_0] = var_15;
                    var_26 = (((arr_10 [13] [i_5] [i_1] [i_1] [11]) || var_19));
                    var_27 -= (~(arr_23 [10] [10]));
                }
            }
            /* vectorizable */
            for (int i_10 = 3; i_10 < 16;i_10 += 1)
            {
                var_28 = (max(var_28, var_15));
                var_29 = ((60 << ((((var_13 / (arr_27 [i_0] [i_0] [i_1] [i_0] [i_10]))) + 11376008812))));
                arr_35 [i_1] [i_1] |= (arr_10 [i_10 - 3] [i_10 + 1] [i_10] [i_10] [i_10 + 2]);
            }
            var_30 = var_12;
            var_31 = var_5;
        }
        var_32 = ((((min(var_13, (((var_3 ? 86 : var_14)))))) ? (((((arr_5 [i_0]) >= var_9)))) : -2411531243424065255));
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        var_33 = var_2;
        arr_39 [i_11] = (-2147483647 - 1);
    }
    var_34 = ((var_11 ? ((((((var_11 ? -6844838647260973086 : 2411531243424065255)) == 0)))) : (((min(298412869, var_10)) << (((var_8 + 2112502846) - 28))))));
    var_35 = 2147483647;
    var_36 = (var_5 ? ((((((var_6 + 9223372036854775807) >> (var_15 + 7881549419158350503)))) ? (min(var_6, var_17)) : (max(var_5, 9223372036854775807)))) : (((var_7 ? (~var_5) : var_16))));
    #pragma endscop
}
