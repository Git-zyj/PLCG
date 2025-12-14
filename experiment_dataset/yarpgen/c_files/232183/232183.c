/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((max(-82, 22)))) - var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_3] [i_2] [i_2] [i_1 + 1] [i_0] [i_0] &= ((23 && var_17) ? var_18 : (((((min(15, 22)))) % (~136237007))));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_20 = 0;
                            var_21 = var_17;
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 136237016;
                            var_22 = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_23 = (((((arr_4 [i_3] [i_1 + 1]) ? var_13 : (max(434588937, -6356775760536077928))))) ? (!24240) : (max(((max(1, var_0))), var_5)));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            var_24 = ((!13761155763248444293) || 33423360);
                            arr_17 [i_0] [i_1 + 1] [i_2] [i_3] [i_5] = (10299 ? var_14 : var_8);
                        }
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((1 <= 22) << (((arr_16 [i_2 + 2] [i_2 + 1] [i_2] [i_2] [i_2]) - 4053150195))));
                        var_25 = (((((-3911601701381866620 ? (-127 - 1) : ((4685588310461107322 ? 1 : 11896))))) ? (((((arr_8 [i_2 + 2] [i_2] [i_1 + 1]) <= ((26950 ? var_11 : -101)))))) : (~1946870008218478576)));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_26 = ((!(arr_0 [i_1 + 1])));
                        var_27 = ((min(((var_2 ^ (arr_2 [i_2]))), (!var_1))));
                    }
                    var_28 |= ((((!((!(arr_23 [i_0] [i_1] [i_1] [i_2 + 3] [i_2])))))));
                    var_29 = min((arr_12 [i_0]), var_6);

                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        var_30 = (max(var_30, (((127 || (((127 ? 2147483640 : 0))))))));
                        var_31 = 136237007;
                        var_32 = ((var_10 ? (~1) : (arr_9 [i_8] [i_8 - 1] [i_8] [i_8 + 2])));
                        var_33 -= ((-(((!(arr_12 [i_0]))))));
                    }

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_34 = ((((~(arr_1 [i_2 + 2])))) == (min(0, 1602177081387597150)));
                        var_35 *= var_14;
                        var_36 -= (((((43 ? 4611686018427385856 : 950258466))) ? (max(3344708823, 1)) : (!-var_13)));
                    }
                }
            }
        }
    }
    var_37 ^= ((-((var_4 ? var_1 : ((var_12 ? 23 : var_10))))));
    var_38 = (!((((((4 ? 52629 : 64))) ? (var_8 != 1) : (!var_7)))));
    #pragma endscop
}
