/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1763026108271668431;
    var_11 -= ((((var_7 != (!var_7))) ? 536870912 : ((((!(((var_9 ? var_7 : var_9)))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (!-var_9);
        var_12 = (min(var_12, -var_9));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            var_13 += ((-((((max(-6486087160299603510, 926090260))) ? (((arr_5 [i_1] [1]) + var_1)) : ((min((arr_7 [13] [i_1]), -1407128833)))))));
            var_14 = (max(var_14, ((max((((arr_7 [i_2 + 1] [i_2 + 1]) ? (arr_6 [i_2 - 3] [i_2 + 3]) : (arr_7 [i_2 + 4] [i_2 - 2]))), (arr_7 [i_2 - 3] [i_2 - 2]))))));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_14 [i_3] [i_3] [i_1] = (((max(((var_9 ? var_6 : var_9)), -1040190203))) ? (((((974763306982141839 == -7727412454170857150) != ((var_4 ? -6486087160299603502 : var_3)))))) : -861326916);
            arr_15 [i_1] = ((((max((arr_10 [i_1] [i_3]), -var_0))) / (arr_8 [i_1] [i_3])));
        }
        arr_16 [13] [13] = ((!((((arr_7 [i_1] [i_1]) ? -2063746632 : (arr_7 [i_1] [i_1]))))));
        var_15 -= (arr_2 [i_1]);

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_19 [i_1] [i_4] [9] = ((7461 ? ((min((arr_9 [i_1] [i_4]), ((min(104, var_7)))))) : 13646167363862504044));
            arr_20 [i_4] = ((9007199254740991 << (((((arr_9 [i_4] [i_1]) ? 191093079 : ((-(arr_13 [i_1]))))) - 191093070))));
            arr_21 [i_4] [i_4] [i_1] = ((!(arr_12 [i_4])));
            arr_22 [i_1] [i_4] [i_1] = -1794065869949489820;

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                arr_26 [i_5] [i_5] [1] [i_5] = (max((((arr_25 [i_1] [i_4] [i_5]) < (arr_25 [i_1] [i_4] [i_4]))), (((arr_25 [i_5] [i_1] [i_1]) && (arr_25 [i_1] [17] [i_1])))));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_16 = 53703;
                    var_17 = (min(var_17, ((((((arr_18 [i_1] [i_1] [i_1]) % (arr_2 [i_1]))) ^ (((9276686236864823451 ? var_8 : (arr_7 [i_6] [i_1])))))))));
                }
                var_18 = (min(var_18, (((max(7200424306270789156, (arr_7 [i_1] [i_1])))))));
            }
        }
        for (int i_7 = 4; i_7 < 24;i_7 += 1)
        {
            arr_33 [i_7] = (((((((arr_23 [i_7 - 3] [i_7] [i_7 - 3]) >= var_7)))) > ((2141384500 << (1040190198 - 1040190191)))));
            arr_34 [i_7] [i_7] = var_1;
            var_19 = (min(var_9, ((~(((arr_2 [19]) ? 18446744073709551615 : (arr_5 [i_1] [i_7 + 1])))))));
        }
        arr_35 [i_1] [i_1] = ((var_1 ? (arr_4 [i_1]) : 191093079));
    }
    #pragma endscop
}
