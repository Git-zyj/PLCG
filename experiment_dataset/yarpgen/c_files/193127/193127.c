/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = var_5;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((max(((max((arr_2 [i_0]), var_12))), (((var_1 / -924789617) + var_14)))))));
                    var_20 = (arr_2 [i_1]);
                    var_21 = (max((((arr_7 [i_2] [i_0] [i_0]) ? (max(var_16, var_15)) : (!var_13))), ((min(var_15, (arr_2 [i_1]))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_22 = 0;
                        var_23 = ((966329958 ? (arr_8 [i_0] [18] [i_0]) : (arr_8 [i_3] [i_1] [i_0])));
                        var_24 = ((!(arr_9 [i_2 - 1])));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_25 = (((966329958 > 1044480) + 15953027620909836077));
                        var_26 = ((((min((arr_4 [i_1] [i_2 - 1] [i_1]), (arr_4 [i_1] [i_2 - 1] [i_1])))) ? 2493716452799715540 : ((((min(var_11, 0))) | (((arr_2 [i_1]) + var_6))))));
                        var_27 -= ((((966329958 + (min(var_9, var_1)))) + (arr_2 [i_0])));

                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 17;i_5 += 1)
                        {
                            var_28 = (~var_9);
                            var_29 = ((13503350877263109067 ? 336551454 : (-9223372036854775807 - 1)));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_30 = (max(var_30, (arr_17 [i_1] [i_2 - 1] [i_1] [18])));
                        var_31 = var_10;
                        var_32 = (arr_13 [i_6] [9] [i_0]);
                    }
                }
            }
        }
    }
    for (int i_7 = 4; i_7 < 8;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        var_33 = max(var_14, ((((max(0, 496))) ? (~var_9) : var_4)));
                        var_34 *= (((((~(arr_0 [i_7 - 3])))) ? (max((((9223372036854775807 ? 181434337 : 10718))), -5482155024625081338)) : (((((min(-322667114, 1))) ^ (min(var_5, 966329958)))))));
                    }
                }
            }
        }
        var_35 = (15953027620909836069 & -5482155024625081336);
        var_36 -= (min(((((max(var_14, 127))) ? (min((-2147483647 - 1), (arr_2 [14]))) : (var_17 / var_13))), var_15));
        var_37 = var_3;
        var_38 &= ((max((arr_2 [4]), (8123848350212162935 > 2121873033))));
    }
    var_39 = ((-(max((var_3 + var_2), (max(var_3, var_7))))));
    #pragma endscop
}
