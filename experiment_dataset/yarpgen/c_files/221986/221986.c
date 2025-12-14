/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_17 -= 18446744073709551594;
            var_18 = (max(var_18, ((((max(var_7, (arr_0 [i_1 - 3] [i_1 - 3])))) ? (min(-1388509991, 86368536)) : (((arr_0 [i_1 + 1] [i_1 - 3]) & (arr_0 [i_1 - 3] [i_1 - 3])))))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_19 = (max(var_19, (((!((((arr_3 [i_0] [i_1 - 1] [i_2 - 1]) / (arr_3 [2] [i_1 - 2] [i_2 - 2])))))))));
                        arr_10 [7] [i_1] [i_2] [9] = (max((min((min(var_13, var_7)), ((((arr_4 [i_3]) ? 4040 : var_7))))), ((((((!(arr_0 [i_0] [i_0]))))) ^ (arr_5 [i_0] [i_0])))));
                    }
                }
            }
        }

        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            var_20 = 5705386310541890250;

            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
            {
                var_21 = (max((((arr_13 [i_4 + 1] [1]) - (max((arr_6 [i_0]), 17309990853390673625)))), var_15));
                var_22 = (((+((min((arr_15 [i_5] [3]), (arr_8 [i_0] [i_4])))))));
                arr_17 [i_0] [i_5] &= ((-86368532 ? (((!(arr_16 [i_5] [i_4 + 2] [i_0])))) : var_3));
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
            {
                var_23 = var_10;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_24 = ((((((-86368564 + 2147483647) << (4022 - 4022)))) ? (13538052805827538114 && var_9) : (-86368532 & var_2)));
                            var_25 &= (max((10 - -86368536), (366840229 - 4040)));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_26 = ((-(var_16 != var_3)));
            var_27 = (((arr_7 [0] [i_9] [4]) ? var_16 : var_3));
            var_28 = -var_10;
        }
    }
    var_29 = var_9;
    #pragma endscop
}
