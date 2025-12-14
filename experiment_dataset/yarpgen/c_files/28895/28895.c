/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((var_5 & var_7) ? (((((3512201105867978119 ? var_5 : var_12))))) : (((11880644972786773979 != 6566099100922777637) ? ((var_1 ? 2292368413 : 11880644972786773968)) : var_7)))))));
    var_16 = ((((((var_5 + var_0) / ((var_3 ? var_2 : 3512201105867978121))))) * 11880644972786773978));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1 - 2] = var_2;
                    arr_10 [i_1] [13] [13] = (((max(2159444117, 0)) / var_11));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = 25780;
                        var_18 += ((var_14 ? (3603580879 >= var_1) : ((var_2 ? var_8 : 23396))));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_19 *= (((!4730252251450743117) ? 13886398449478399346 : (((13886398449478399325 ? var_13 : 2626061275056035818)))));
                            var_20 *= 211;
                            var_21 ^= 4218028426;
                        }
                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            arr_18 [i_5 + 1] [i_1] [i_2] [i_3] [i_3] [4] &= (((((var_1 ? var_12 : 293787915))) / ((55891 ? 42141 : var_7))));
                            arr_19 [i_1] = (((43342 / var_10) ? (((var_3 ? 3570589414 : var_10))) : (((-8073881010364286253 + 9223372036854775807) >> (var_10 - 69)))));
                            var_22 = (max(var_22, (var_12 && 1)));
                        }
                        var_23 = (max(var_23, ((((var_11 ? 211 : 8537)) >> (var_11 + 32103)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_2 - 2] [i_6] [i_1] = (((2172182911 | var_11) < (var_5 - var_7)));
                        var_24 |= (!var_8);

                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            var_25 &= (13886398449478399346 != 23394);
                            arr_26 [1] [i_6] [6] [i_1] [1] |= 1;
                            var_26 = (-var_2 ^ var_5);
                            arr_27 [i_1] [i_1] [i_1] [13] [i_1] = var_8;
                        }
                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            var_27 += ((var_3 ? 7 : ((8073881010364286263 ? 13427077409336261208 : var_4))));
                            var_28 = 211;
                        }
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                    {

                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            arr_35 [i_2] [i_1] = ((((min((min(502453131, var_5)), 2866661430))) && 60296));
                            var_29 = ((((max((((var_1 ? var_4 : -911417274))), var_5))) && ((max(var_14, var_4)))));
                            var_30 = ((-7105666436946481797 > 5212) ? (((var_0 ? ((18446744073709551608 ? var_2 : var_14)) : var_2))) : (min(var_3, (((38694 ? var_6 : 23433))))));
                            var_31 = ((724377887 ? 2209274434585001422 : 1));
                            var_32 = ((var_4 ? 2147483639 : ((((((120 ? 42101 : 20230))) ? ((724377892 ? var_6 : 1)) : (1 >= 47056))))));
                        }
                        var_33 = (min((var_13 < var_3), ((-((max(47061, -30030)))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                    {
                        var_34 = var_9;
                        var_35 = (((var_6 + var_6) ? ((var_4 ? -24287 : var_4)) : 16));
                    }
                    var_36 *= var_3;
                }
            }
        }
    }
    #pragma endscop
}
