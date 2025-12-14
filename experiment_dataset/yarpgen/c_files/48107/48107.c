/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_18 > var_7);
    var_20 = (min((min((var_0 ^ var_18), var_1)), var_16));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_21 = ((((min(var_0, (max(105, var_10))))) % (min((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))), ((var_11 ? var_13 : (arr_1 [i_0])))))));
        var_22 = (min(((max(var_2, (arr_2 [i_0])))), ((-(arr_0 [i_0])))));

        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            var_23 = (min(var_23, ((((((((~(arr_1 [i_1 + 1]))) - (~var_5)))) ? ((var_5 ? var_17 : var_12)) : var_11)))));
            var_24 = (min(var_24, ((min((min((arr_1 [i_0]), (arr_1 [i_0]))), (min((((var_7 ? var_13 : var_1))), (arr_4 [1]))))))));
            var_25 = (max(var_25, ((min(((((arr_3 [i_1 + 1]) ? var_15 : var_4))), ((var_5 - (arr_3 [i_1 - 2]))))))));
        }
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {
                var_26 |= var_6;
                var_27 = var_17;
                var_28 = ((-(min(((((arr_6 [i_0] [i_0] [i_0]) + (arr_7 [i_0])))), var_13))));

                for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                {
                    var_29 = (max(var_29, ((min(((((min((arr_9 [i_0] [i_4] [i_3] [i_4]), var_2))) ? var_9 : ((((arr_4 [i_0]) ? var_1 : var_17))))), var_6)))));
                    var_30 = (max(-11559, ((((max(210, 88))) ? ((max(var_16, 2))) : 2013265920))));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    var_31 |= var_2;
                    var_32 = (max((~var_3), (((var_12 ? var_12 : (arr_5 [i_0] [i_0]))))));
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                {
                    var_33 = (max(var_33, (min(var_7, ((min(var_18, var_17)))))));
                    var_34 = ((((min((arr_5 [i_2] [i_2 + 2]), var_13))) ? ((((arr_7 [i_0]) ? ((((arr_2 [i_0]) && var_12))) : var_4))) : ((var_12 ? var_2 : (arr_5 [i_0] [i_2 + 1])))));
                }
            }
            for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_35 = (0 ? ((min((max(var_12, 90)), var_7))) : (max(var_7, (arr_8 [i_2 - 2] [i_0]))));
                    var_36 = (((((var_5 > (arr_5 [i_2 + 1] [i_2 - 1])))) == -var_2));
                }
                var_37 = ((-((((var_2 || var_2) != (max(5702393461260587094, 1)))))));
                var_38 = (min(((min((min(var_18, (arr_8 [i_0] [i_0]))), (-37 < var_13)))), (((((209 ? (arr_19 [i_0] [i_0] [i_7]) : (arr_19 [i_0] [i_0] [i_7])))) - (min(var_11, var_7))))));
            }
            var_39 = (min((min(var_7, (arr_19 [i_2 - 1] [i_0] [i_0]))), (((arr_19 [i_2 - 2] [i_0] [i_2 - 1]) - var_7))));
            var_40 = ((9223372036854775807 ? 28 : 68));
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_41 = (min(((((min(-10780, 118))) & (var_6 != var_10))), (((arr_10 [i_9] [i_9] [10] [i_9]) ? (var_7 && var_13) : var_17))));
        var_42 = ((-var_3 > (min((arr_15 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]), var_14))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_43 = (min((((var_11 ? 62 : var_9))), (~var_11)));
        var_44 = (max(var_44, (((((var_15 ? (var_17 ^ var_2) : -var_3))) && var_12))));
        var_45 = (min(-11563, ((11559 ? 65535 : -669))));
        var_46 = (((max(var_14, var_9)) % ((min((max(var_15, 172)), (((arr_22 [i_10] [12]) & var_3)))))));
    }
    #pragma endscop
}
