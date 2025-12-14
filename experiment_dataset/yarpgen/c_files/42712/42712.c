/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_7 + 2147483647) << ((((64 != var_6) > -var_2)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_20 &= var_5;
                        arr_15 [i_2] [i_1] [i_0] [i_0] [i_2] = (((arr_10 [i_0] [i_0] [i_2]) || ((((((20146 ? var_3 : (arr_3 [i_0])))) & (min(var_13, 65520)))))));
                        var_21 = -5076075907483322623;

                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_22 = (-(arr_4 [17] [17] [17]));
                            var_23 = (arr_3 [i_0]);
                            var_24 = (max((((((min((arr_8 [i_0] [i_3] [i_2] [i_0]), (arr_16 [i_0] [i_0] [i_2] [i_3] [i_3])))) ? (((arr_14 [i_1] [i_1] [i_0]) ? var_18 : (arr_11 [i_0] [i_1] [1] [i_3]))) : (!-20129)))), var_5));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_3] [i_5] |= (((((max((arr_10 [i_3] [i_1] [i_1]), var_10))) ? (max(0, 12)) : (((var_17 ? (-127 - 1) : (arr_13 [i_0] [i_0] [i_2] [i_2])))))));
                            var_25 = min(((min(2, (arr_13 [i_0] [i_1] [i_1] [i_3])))), (((arr_13 [i_2] [14] [i_2] [i_2]) % var_7)));
                            arr_21 [4] [i_1] [i_2] [i_3] [i_1] [i_0] [i_0] = ((((((max(157, var_5)) || var_2)))));
                            arr_22 [i_0] [i_0] [18] [i_3] [i_0] [i_3] [i_1] = ((((min((arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] [13]), var_9))) ? ((var_3 | (max((arr_10 [i_0] [i_1] [i_0]), -20145)))) : (((1 ? (!-94) : -678783987)))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_26 ^= (((arr_2 [i_3]) ? (arr_8 [i_0] [i_2] [i_3] [i_3]) : (arr_2 [i_3])));
                            var_27 = (arr_7 [i_0]);
                        }
                    }
                }
            }
            arr_25 [12] [i_1] |= (min((((((var_18 ? -1081202434 : var_15)) + ((min(var_16, (arr_12 [i_0] [i_0] [i_0] [i_0]))))))), (min(var_5, (max(73, (arr_16 [i_0] [i_0] [15] [i_0] [i_0])))))));
        }
        var_28 -= (min((((!32739) ? ((20146 ? (arr_10 [8] [i_0] [8]) : var_8)) : var_16)), ((min((max(5880, 199)), (((20128 != (arr_5 [16] [16] [i_0])))))))));
        var_29 = 1257795135578179995;
        arr_26 [i_0] [i_0] = ((((((((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 57285 : 0))) ? ((max((arr_11 [i_0] [i_0] [i_0] [i_0]), var_2))) : -48700))) ? (((arr_12 [i_0] [i_0] [i_0] [i_0]) / (arr_12 [i_0] [i_0] [i_0] [i_0]))) : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]));
    }

    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_30 = (((((arr_27 [i_7] [10]) ? ((23258 ? -23259 : -20129)) : ((max(var_0, 46))))) | ((min(0, var_2)))));
        var_31 = ((min((arr_28 [i_7]), (var_0 | 3))));
    }
    var_32 *= min((min(var_17, ((var_9 ? var_2 : var_17)))), (199 && -557603680));
    #pragma endscop
}
