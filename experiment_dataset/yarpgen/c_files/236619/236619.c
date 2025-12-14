/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!4294967295);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((((max(-1, ((-9223372036854775807 - (-2147483647 - 1)))))) ? 1152921504606846976 : ((-6 - (((min(255, 0))))))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    arr_10 [2] [i_1] [i_1] = (((((-(-7 / -1)))) ? (max((-7 ^ 2097024), (~0))) : 2));
                    arr_11 [i_1] [i_1] [i_2] [i_2] = (max(((min(((1 >> (-9 + 19))), (8 == 1)))), (5 - 0)));
                    arr_12 [i_0] [i_0] [i_0] [i_1] = ((-(((4294967295 > 65535) * 0))));
                    arr_13 [i_1] = (((((min(5, 32766))) ? -18446744073709551615 : 1)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    arr_18 [i_1] = -5;
                    arr_19 [i_0] [i_1] [i_3] = ((28 >> (65280 != -1)));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_26 [i_1] [i_1] [i_1] [7] [i_1] = -0;
                                arr_27 [i_3] [i_5] = (((1 ? -17 : 0)));
                                arr_28 [i_1] [12] = 1;
                                arr_29 [i_0] [i_0] [i_0] [i_1] [i_0] = (((~0) && (9223372036854775807 > -1)));
                            }
                        }
                    }
                    arr_30 [i_0] [i_3] = (((16 ? 1 : -9223372036854775807)) <= 0);
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    arr_33 [i_1] [i_1] [i_1] [i_6] = ((((((max(0, 535822336)) % (~1056964608)))) ? (min((1 + 1), (768 ^ 5))) : (((17 ? (0 ^ 1008) : (!1))))));
                    arr_34 [i_0] [i_1] [i_6] = (((!0) || (((max(2097151, (-9223372036854775807 - 1)))))));
                    arr_35 [i_1] = (9223372036854775807 ? ((((!1) >= (65530 >> 0)))) : ((((!1) == (max(2147483647, 4))))));
                }
            }
        }
    }
    #pragma endscop
}
