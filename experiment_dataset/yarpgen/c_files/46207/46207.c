/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((max(-42, 0))) ? 78 : ((2990736201 ? var_7 : (arr_5 [i_1] [i_1 + 1] [i_1 + 1])))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_14 = ((~((~(arr_1 [i_1 - 1])))));
                    arr_11 [i_2] [i_2] [i_2] [i_2] = ((min(var_13, ((var_1 / (arr_7 [i_0] [i_1] [i_2] [i_2]))))));
                    var_15 *= ((((min((3227257779234515432 || 192), (max(60, var_8))))) && (((-((44237 ? var_8 : 11)))))));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_16 = (min(var_16, 44237));
                                var_17 = (min(var_12, (arr_18 [9] [i_5 - 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1])));
                            }
                        }
                    }
                    var_18 *= ((((max((arr_2 [i_1 - 2] [i_1 - 3] [i_1 + 1]), (arr_2 [i_1 + 1] [i_1 - 3] [i_1 - 1])))) ? ((((1304231095 ? 63 : -117)))) : (((~var_12) ^ (((arr_16 [i_0]) * (arr_18 [i_0] [i_0] [i_0] [i_1] [i_3] [i_0])))))));
                    arr_20 [i_0] [i_0] [i_0] = 201;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_19 += var_0;
                                var_20 ^= (arr_23 [i_0] [19] [i_0]);
                                var_21 = ((((((min(-127, var_7))) ? (((arr_18 [i_0] [3] [i_3] [12] [i_7] [i_7]) ? 556377285 : var_8)) : 44234)) >> (((min((arr_8 [i_1 + 1] [i_1 - 2] [i_1 - 2]), (18446744073709551611 + 177))) - 151))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((536870912 ? var_0 : (min(var_3, (var_4 / 58)))));
    var_23 ^= (((((((min(var_13, var_12))) ? ((var_9 ? 3758096366 : var_7)) : ((var_8 ? var_0 : var_2))))) ? (((var_4 ? var_8 : var_10))) : var_1));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            {

                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    var_24 = (arr_25 [i_8] [i_8] [i_10] [i_8] [i_8] [i_8] [i_8]);
                    var_25 = (min((((+((min((arr_10 [i_8] [i_9] [i_10]), 103)))))), 14388343488809638308));
                }
                var_26 += arr_34 [i_9];
                var_27 = var_6;
            }
        }
    }
    #pragma endscop
}
