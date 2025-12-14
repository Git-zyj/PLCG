/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= 254;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_0 - 2] [i_1] = (var_7 * 36089);
                var_13 = (min(var_8, (((!(((1289 ? 13816021603086276592 : var_4))))))));
                var_14 = (max(var_14, ((((!(-8284222709841110225 < 18446744073709551615)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_15 = var_4;

                    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_2] = (-((((~var_4) < 0))));
                        arr_21 [i_3] [i_3] [i_4] [i_5] = ((-4769806611930655962 / (-1 | var_10)));
                        var_16 = (min(var_16, (((var_8 % (min((~1), (~18343630399721629144))))))));
                        arr_22 [i_2] [i_3] [i_3] [i_4] [i_5] = (((-117 ? (~-625077186926509687) : var_11)) < (((31417 >> (2347915036 - 22279)))));
                        arr_23 [1] [i_5] [i_4] [i_4] |= (131068 < var_3);
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        arr_28 [i_2] = (((-1 * 1947052260) < 0));
                        var_17 *= (~var_2);
                        arr_29 [i_6] [1] [i_3] [i_3] [i_2] = (-1 + 1);
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_33 [i_2] [i_2] [i_3] [i_4] [i_7] = ((((-(min(-824866873508164050, 0)))) < -19));
                        arr_34 [i_2] [i_3] [i_4] [i_7] = var_0;
                        var_18 = 15566138927690060942;
                        arr_35 [i_2] [i_2] [i_2] [i_2] [i_2] = ((!(((((max(0, var_3)))) == ((429040868 ? 15566138927690060942 : -49))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_40 [i_8] [i_8] [i_8] [i_3] [i_2] = 1289;
                        var_19 = ((var_3 - ((2347915036 ? var_8 : 35384))));
                        arr_41 [i_8] = (var_8 <= var_9);
                        arr_42 [i_2] [i_3] [i_4] [i_2] [i_8] = 216;
                    }
                }
            }
        }
    }
    #pragma endscop
}
