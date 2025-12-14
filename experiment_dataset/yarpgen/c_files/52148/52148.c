/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((-var_6 ? 1 : ((31 ? var_0 : var_5)))) + (var_2 - 1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0 + 1] [i_0] = (arr_5 [i_0]);
                    arr_8 [i_0] = (arr_3 [i_0 - 1] [i_0] [i_2]);
                }
                for (int i_3 = 3; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_3 + 1] [i_0] [i_0] [i_0 - 1] = (-3 ^ 36168);
                    arr_14 [i_0] [i_1] [i_0] = ((((((arr_4 [i_0]) == ((var_6 ? 8318718378134145147 : (arr_9 [i_0])))))) == (min(var_0, var_0))));
                    var_11 += var_5;
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [i_1] [i_4] [i_5] [i_0] = 21861;

                            for (int i_6 = 3; i_6 < 21;i_6 += 1)
                            {
                                var_12 = (((min(271405103, -697524761725480831)) <= ((((!(arr_9 [i_0])))))));
                                var_13 = (min(var_13, ((((((!var_4) ? var_7 : 39013)) != (15 < -55))))));
                                arr_24 [i_0] [i_1 + 1] [i_4] [i_5] [i_0] [i_0 - 1] = (max((((((arr_1 [i_0]) ? var_1 : var_5)) <= (arr_12 [i_0] [i_0 - 1] [i_0 + 1]))), ((((((var_2 != (arr_1 [i_0]))))) != 3690386393853745994))));
                            }
                            arr_25 [i_4] [i_4 - 2] [i_1 - 1] [i_1] [i_4] &= (max((((!((min((arr_19 [i_0] [i_4]), var_0)))))), (max((arr_21 [i_5] [i_5] [i_5] [i_4 + 2] [i_0 + 1]), (arr_21 [i_5] [i_5] [i_5] [i_4 - 2] [i_0 - 1])))));
                            arr_26 [i_0 - 1] [i_0] [i_1 + 2] [i_4] [i_5] = 21849;
                            var_14 = (min(var_14, ((max(((var_1 ? ((((arr_23 [i_4] [i_1]) || 1))) : (~-16))), (arr_12 [i_4] [i_1 + 2] [i_0 - 1]))))));
                        }
                    }
                }
                var_15 = (min(var_15, var_9));
            }
        }
    }
    var_16 = (var_8 - ((var_1 * (((var_0 ? var_6 : var_8))))));
    var_17 = (max(var_17, ((((((max(var_0, (max(var_3, var_3)))))) > ((min(3260897095, 17720789664153046340))))))));
    #pragma endscop
}
