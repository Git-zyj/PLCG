/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (~-8760635754343855611);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_0] = ((((((arr_5 [i_0]) << ((-(arr_1 [i_0] [i_0])))))) && 14329359981897365200));
            arr_7 [i_0] [i_0] = (max((+-6934072871468517744), ((var_1 ? ((((arr_3 [i_0] [9]) - var_7))) : (((arr_3 [i_0] [i_1]) ? -3594441420439655894 : 15840))))));
            arr_8 [i_0] [i_0] = ((14621594532794568249 ? 14329359981897365201 : (7719846713921718903 >= -24421)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_14 = (((arr_5 [i_2]) ? (arr_5 [i_2]) : (arr_5 [i_2])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_19 [i_0] [i_2] = (((arr_18 [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 1]) ? -1674638307 : (arr_16 [i_0] [i_4] [i_4 + 1] [i_4])));
                        arr_20 [i_0] [1] [i_0] [i_4] = ((var_2 ? ((((arr_3 [i_3] [i_4]) && (arr_2 [i_2])))) : (arr_16 [i_0] [i_2] [i_3] [i_4])));
                    }
                }
            }
            var_15 -= (((arr_1 [i_0] [i_2]) - 4117384091812186415));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_28 [i_7 - 1] [i_7] [i_0] [i_0] [18] = ((-(arr_23 [i_0] [5] [i_0])));
                        var_16 = (max(var_16, ((((((arr_25 [i_0] [i_5]) & 14329359981897365201)) >> ((((arr_23 [i_6] [i_5] [i_6]) >= 17226))))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        arr_33 [i_0] [6] [i_5] [i_0] = (((arr_10 [i_8 - 2] [i_9] [i_0]) ? (arr_10 [i_8 + 1] [12] [i_0]) : (arr_10 [i_8 + 1] [i_5] [i_0])));
                        var_17 = ((-(2889655632 && 1836512311)));
                        var_18 = (~12596475220343138121);
                        var_19 -= 49588;
                    }
                }
            }
            var_20 = (max(var_20, (!10062)));
            var_21 = (((arr_30 [i_5]) + (arr_0 [13])));
        }
        arr_34 [i_0] [i_0] = (80 - 187);
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        arr_39 [i_10] = (((arr_5 [22]) ? (arr_1 [19] [i_10]) : ((var_5 ? (arr_23 [12] [i_10] [i_10]) : (arr_18 [i_10] [i_10] [10] [i_10])))));
        var_22 = (((arr_17 [24] [i_10]) + 1822896709));
        var_23 = ((((max(503899993, ((1 ? -20685 : 764544022))))) || ((((!(arr_18 [i_10] [24] [i_10] [i_10])))))));
        arr_40 [i_10] [i_10] = -var_12;
    }
    var_24 = var_0;
    var_25 -= (max(var_0, ((var_0 - (min(1255371768, var_10))))));
    var_26 = ((!(((var_10 ? (max(-8760635754343855586, 4142288861)) : var_3)))));
    #pragma endscop
}
