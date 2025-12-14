/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min(var_10, var_12)) | ((((137 < var_4) ? (!var_8) : ((var_4 << (137 - 129))))))));
    var_17 = (((((var_1 ? ((var_13 ? 130 : var_15)) : var_1))) ? var_7 : var_9));
    var_18 = (min(var_9, var_8));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (-(((arr_0 [i_0] [i_0]) ? 253 : (arr_1 [i_0]))));
        var_20 = (min(var_20, (((var_0 ? (((((min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))) <= (arr_2 [i_0] [i_0]))))) : (max(var_5, (arr_2 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                {
                    var_21 -= ((max(var_13, (arr_6 [i_2 + 2] [i_2 + 2] [i_3 - 1]))));
                    var_22 -= ((max(((var_5 / (arr_5 [i_3 + 1])), ((var_9 ? var_10 : 4))))));
                    var_23 *= ((((arr_3 [i_3 + 1]) < ((-487205764 - (arr_7 [i_3 + 1] [i_1]))))));
                    var_24 = (min(var_24, 253));
                }
            }
        }
        var_25 = ((3 ? (((((arr_4 [i_1]) ? 4294967274 : -27893)))) : var_7));
        arr_11 [i_1] = (((((arr_6 [i_1] [i_1] [i_1]) ? (arr_6 [i_1] [i_1] [i_1]) : (arr_6 [i_1] [i_1] [i_1]))) < -var_15));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_26 = (max(var_11, ((((max(var_14, -27893))) ? ((((arr_14 [i_4] [i_4]) <= var_6))) : (arr_13 [i_4])))));

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                arr_23 [i_6] [i_5] [i_4] &= (((((arr_18 [i_4] [i_4] [i_4]) >> (((arr_18 [i_6] [i_4] [i_4]) - 91))))) ? (((!(arr_18 [i_4] [i_4] [i_4])))) : (((var_6 < (arr_18 [i_5] [i_5] [i_6])))));
                var_27 = (max((((arr_13 [i_5]) ? (max(var_12, (arr_20 [i_4] [i_5] [i_4]))) : (arr_16 [i_4] [i_4] [i_4]))), (arr_1 [i_4])));
            }
            var_28 = var_12;
            arr_24 [i_4] [i_4] [i_4] = (arr_13 [i_5]);
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            arr_28 [i_7] = -81;
            var_29 = (max((((!(!var_5)))), 15663046115600631639));
        }
        var_30 = (min(var_30, ((((((arr_17 [i_4] [i_4] [i_4]) ? (arr_17 [i_4] [i_4] [i_4]) : var_2)) == ((var_9 ? (-2147483647 - 1) : (arr_17 [i_4] [i_4] [i_4]))))))));
        arr_29 [i_4] [i_4] = var_11;
    }
    var_31 = (((!var_4) ? (((var_3 ? ((var_1 ? var_2 : var_1)) : var_9))) : ((var_14 - (var_11 & 16)))));
    #pragma endscop
}
