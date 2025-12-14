/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_14 *= (((min((1992568680 % -1992568678), var_9)) << (((var_12 % 1992568670) - 21))));
                        var_15 = var_8;
                        var_16 |= (min(((min(-1992568678, 1992568693))), (min(var_8, 2183439733373552892))));
                        var_17 = (((var_4 % var_13) > (((((-4091783159890848710 + 9223372036854775807) << (4382 - 4382))) ^ 1))));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_12 [i_1 - 2] [6] [i_1] = -1992568678;
                        arr_13 [i_1] [i_1] = (min((var_1 <= var_1), var_3));
                        var_18 = var_3;
                        arr_14 [i_2] [i_1] [i_0] [i_4] = ((!(((var_12 ? -1992568678 : -4091783159890848710)))));
                        arr_15 [i_4] [i_0] [i_1] [i_1 - 2] [i_0] = var_10;
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_19 = (var_6 ? 0 : -1992568684);
                            var_20 = (!1);
                            var_21 = (-2003 != 1);
                            var_22 = 1970324836974592;
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_23 &= ((((min((!var_13), (!8556482502323244885)))) | (~63488)));
                            var_24 += (~9890261571386306730);
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_5] [i_1 + 1] [i_1] [i_2] [i_1] [i_8] &= (var_10 * 0);
                            var_25 = (max(var_25, var_0));
                            var_26 = (max(var_26, ((min((var_6 || var_10), var_6)))));
                        }
                        arr_28 [i_0] [i_1] [i_2 + 1] [i_1] [i_1] [10] = var_5;

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_32 [i_1] [i_5] [i_9] = ((((var_0 ? var_5 : var_7)) + 1295914098));
                            var_27 = (var_12 ^ 79);
                            var_28 = var_11;
                        }

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_29 = (min(var_29, ((((!var_1) ^ var_10)))));
                            var_30 *= var_0;
                        }
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            arr_38 [i_1] [i_5] [i_5] [i_2] [i_1 - 1] [i_1] [i_1] = (var_6 + var_1);
                            var_31 = (((((min(4503597479886848, -4143109861300134994)) != ((min(var_6, var_8))))) && 1));
                            var_32 = var_4;
                            arr_39 [i_1] = (((var_12 % var_0) - (!var_13)));
                            var_33 = (min(var_12, var_5));
                        }
                    }
                    var_34 = (((((~((var_9 >> (var_10 - 194)))))) && -0));
                }
            }
        }
    }
    var_35 = (var_1 - var_4);
    #pragma endscop
}
