/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (6588 % 6588);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 = ((((~((min(6603, (arr_9 [i_0] [i_1] [i_1] [i_3])))))) < (((65535 < ((min(17461, var_4))))))));

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_19 = (max((min(58947, (arr_7 [i_0] [i_0] [i_0] [i_1]))), var_4));
                                var_20 = (max(((min(14419, (min(6589, 14419))))), (((34590 + 6587) ? (((arr_10 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4]) ? (arr_7 [i_0] [i_0] [i_0] [i_1]) : (arr_13 [i_1]))) : var_15))));
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1)
                            {
                                var_21 = ((+((min((arr_12 [i_0] [i_1] [i_2]), (arr_11 [i_0] [i_1] [i_0] [i_3] [i_3] [i_5]))))));
                                var_22 = (max(var_22, (((((min((min((arr_6 [i_1]), (arr_4 [i_1] [i_3] [i_5]))), (min((arr_7 [i_0] [i_1] [i_2] [i_0]), (arr_0 [i_0] [i_1])))))) ? ((-(arr_9 [i_0] [i_2] [i_3] [i_5]))) : (34591 && 56))))));
                                var_23 = (((arr_8 [i_3] [i_1] [i_2] [i_2] [i_1]) ? (arr_12 [i_1] [i_1] [i_0]) : -14419));
                            }
                            for (int i_6 = 0; i_6 < 19;i_6 += 1)
                            {
                                var_24 &= (((arr_6 [i_3]) * -255));
                                var_25 = (((((max(19033, (arr_18 [i_6] [i_3] [i_1] [i_0] [i_1] [i_0] [i_0]))) >> ((((min((arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] [i_6]), 4304))) - 4299))))));
                                var_26 += (((arr_4 [i_0] [i_0] [i_0]) ? (max(((~(arr_12 [i_0] [i_3] [i_0]))), (arr_11 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2 - 1]))) : (arr_4 [i_0] [i_3] [i_6])));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 19;i_7 += 1)
                            {
                                var_27 = (max(var_27, ((((arr_21 [i_0] [i_0] [i_0] [i_2 - 1] [i_2]) >> ((((var_5 ? (arr_17 [i_0] [i_1] [i_1] [i_1] [i_7] [i_0]) : var_4)) + 10802)))))));
                                var_28 += (arr_3 [i_0]);
                            }
                            var_29 = (min(var_29, (((-((32767 ? (!58962) : (((!(arr_8 [i_0] [i_0] [i_2] [i_0] [i_0])))))))))));
                        }
                    }
                }
                var_30 = (arr_0 [i_1] [i_1]);

                /* vectorizable */
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    var_31 = (arr_1 [i_0] [i_0]);
                    var_32 &= -21087;
                    var_33 = (arr_1 [i_8] [i_1]);
                }
                var_34 = (min(var_34, (((+(((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_1]) : var_7)))))))));
            }
        }
    }
    var_35 = (((!var_12) ? 56 : var_10));
    #pragma endscop
}
