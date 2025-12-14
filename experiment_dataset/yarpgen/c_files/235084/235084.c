/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = ((!((min(1, -79)))));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            var_14 &= 7680;
                            var_15 -= -97;
                            var_16 = 96;
                            var_17 -= (arr_9 [0] [i_1] [i_2] [8] [i_4]);
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_18 = 11391;
                            arr_16 [i_5] [13] [i_5] [i_5] [0] [i_5] [i_3] = ((-69140308 ? 0 : -5414320255280252951));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_3] = ((((min(1099914848412055819, ((-69140297 ? -7931542045459827561 : var_7))))) ? -9052229188536861462 : -55));
                            var_19 &= (((((!0) ? (arr_9 [i_0] [i_1] [i_2] [i_0] [i_6]) : (min(4032, var_0)))) > (((-var_1 ? 1071151375 : ((min(69140297, var_9))))))));
                            arr_20 [i_0] [i_0] [i_0] [i_3] [i_0] [i_3] = (min(((((32768 << (var_1 - 208070457959076226))))), (((0 ? -9052229188536861470 : 12788345488370927922)))));
                            var_20 ^= (min((((arr_4 [i_0]) ? 3223815923 : -1)), (((-(arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_6]))))));
                            var_21 -= 1689499431;
                        }
                        var_22 -= (~0);
                    }
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] = var_1;

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            var_23 = -14766;
                            var_24 = 2405274593353593616;
                            arr_28 [7] [i_1] [16] [16] [12] [2] = ((64239 ? (arr_18 [i_7 - 2] [i_2]) : var_2));
                            arr_29 [i_0] [i_0] [8] [10] [8] [i_8] [i_8] = -18446744073709551615;
                            var_25 &= ((22445 * (var_10 / 6291456)));
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_26 = ((((((min(26, (arr_22 [i_1])))) ? (0 / 6262185335370770121) : (arr_2 [i_0]))) * (!2717910168346207387)));
                            var_27 = (((var_11 ? var_6 : 485079380)));
                            var_28 &= ((524287 ? var_5 : ((min((524294 | -1), (~-69140308))))));
                        }
                    }
                }
            }
        }
    }
    var_29 = var_7;
    var_30 = var_3;
    #pragma endscop
}
