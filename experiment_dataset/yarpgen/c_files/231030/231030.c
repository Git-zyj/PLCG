/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_18;
    var_21 = var_13;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        var_22 = var_11;
                        var_23 = min(var_9, (arr_3 [i_2]));
                    }
                }
            }
        }
        var_24 = var_1;

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_25 = (!var_6);

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    var_26 = (arr_0 [i_0]);

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_27 = (arr_13 [i_4] [i_6] [i_7]);
                        var_28 = (arr_11 [i_4] [i_5] [i_6]);
                        var_29 = var_4;
                        var_30 *= ((-(arr_6 [i_7])));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_31 *= (arr_24 [12] [5] [i_6]);
                        var_32 = var_0;
                        var_33 = (min((min(77, 13603100508085396385)), ((min((arr_16 [i_0] [i_4] [i_0]), (arr_8 [i_0] [i_0] [i_5]))))));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_34 += -32757;
                        var_35 = min(((((arr_2 [i_0]) ? ((min((arr_28 [17] [i_4] [i_0] [i_4] [i_9]), var_11))) : (arr_16 [i_0] [i_0 + 1] [i_0])))), (min((arr_1 [i_6] [i_5]), (min((arr_14 [i_6 + 1]), (arr_14 [i_0]))))));
                    }
                }
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_36 = (((arr_17 [i_0] [i_4] [i_5] [i_10]) ? 11185 : 14127487872777618714));
                    var_37 ^= (((arr_12 [i_10] [i_4]) ? 4319256200931932901 : (!-1353427831)));
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                {
                    var_38 = (min(var_38, (((14127487872777618725 ? (((arr_24 [i_11] [i_4] [i_0 + 2]) ? 4319256200931932897 : 4319256200931932882)) : (arr_10 [i_0 + 2] [i_0 + 2]))))));
                    var_39 = ((47 ? (arr_11 [i_5] [i_4] [i_5]) : (arr_2 [i_0])));
                    var_40 = (min(var_40, ((min((arr_22 [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_11]), (arr_16 [6] [i_4] [i_11]))))));
                }
                for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                {
                    var_41 += (arr_12 [i_0 - 1] [i_0 - 1]);
                    var_42 = (max(var_42, (((~(max((arr_21 [i_0 + 2]), (arr_12 [i_0] [i_0 + 1]))))))));
                }
                var_43 = (((arr_19 [i_0] [i_0] [i_0] [i_0 - 1]) ? (min(-3826870610650027306, 141)) : (arr_27 [i_5] [i_5] [i_4] [i_4] [i_4] [0])));
                var_44 = var_14;
                var_45 = (min((min((arr_19 [i_0] [16] [i_4] [i_5]), ((((arr_5 [i_0]) ? (arr_1 [i_0] [i_5]) : (arr_25 [i_0] [7])))))), (arr_16 [i_0] [i_4] [i_0])));
                var_46 = (arr_35 [i_0 + 1] [i_0]);
            }
            var_47 = (max((arr_1 [i_0 + 2] [i_0 + 1]), (((!(arr_1 [i_0 + 1] [i_0 + 2]))))));
            var_48 = var_2;
        }
    }
    #pragma endscop
}
