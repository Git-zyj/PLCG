/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((((var_5 ? 7260386527305293118 : var_2))) || (((var_5 ? -57 : 27012))))))) - ((-(min(var_10, -2))))));
    var_17 = var_8;
    var_18 = (56905 & ((((min(var_9, 27012))) ? (!var_8) : ((min(var_4, 27012))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_19 = ((((max(95, -102))) ? (((arr_2 [i_0]) ? (arr_1 [i_0]) : var_4)) : -102));
        var_20 = (((-(arr_2 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = -212012387;

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_21 = ((+((((((arr_9 [i_1] [i_2]) ? 27032 : var_14))) ? ((((arr_6 [i_1]) < 101))) : ((-4 * (arr_3 [i_1])))))));
            var_22 = (max(var_22, ((min((arr_6 [6]), -877345191)))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_23 = (min(var_23, ((((arr_15 [i_1] [i_1] [1] [1]) > ((((-71 ? var_14 : var_6)))))))));
                        arr_17 [i_1] = ((((max(var_3, (arr_16 [i_1] [i_2] [i_2] [1] [i_1] [i_4])))) - ((((arr_11 [i_1] [i_1] [i_1] [i_1]) != (((-(arr_3 [1])))))))));
                        var_24 = (min(((min(0, 1))), (arr_11 [i_1] [i_2] [i_3] [i_4])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_25 = (min(var_25, ((((((((((arr_19 [i_1] [i_1] [i_5 + 2] [6]) ? (arr_9 [0] [i_6]) : var_4))) ? (((var_11 ? (arr_21 [i_6] [6] [i_2] [i_1]) : (arr_1 [i_5])))) : ((var_3 ? -102 : (arr_2 [6])))))) ? (!43) : var_14)))));
                        arr_22 [i_1] [i_2] = (((((max((arr_5 [i_5]), 0)))) ? (((min(((!(arr_5 [4]))), (min(0, 1)))))) : (max((min(-5409492785053750865, (arr_19 [i_1] [i_2] [i_5] [i_1]))), var_5))));
                        arr_23 [i_1] [i_1] [i_1] [i_1] = ((94 ^ ((0 << (3459469405 - 3459469395)))));
                        var_26 = ((-((((91 > (arr_15 [i_6] [i_6] [6] [i_6])))))));
                    }
                }
            }
        }
        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            var_27 = (arr_19 [i_1] [i_1] [i_1] [i_1]);
            arr_26 [i_1] [i_1] = -27033;
            arr_27 [i_1] [i_1] = 29408;
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    var_28 = var_2;
                    var_29 = ((!((1 && ((min(-103, (arr_2 [i_1]))))))));
                }
            }
        }
    }
    var_30 = (min(var_3, var_11));
    #pragma endscop
}
