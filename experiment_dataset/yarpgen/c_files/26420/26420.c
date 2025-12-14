/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = var_1;
    var_12 = var_5;
    var_13 = (max(var_13, ((((!(((61064 ? 17 : 0)))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, ((((((32767 ? 18446744073709551599 : 1)) < ((max(276949045, (arr_0 [i_0]))))))))));
        var_15 = var_6;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_13 [i_2] [2] = (min((((!(arr_8 [i_2 - 1] [i_2 + 2] [i_3])))), (((((var_2 ? var_9 : var_6))) ? ((((arr_8 [i_1] [i_2] [i_3]) <= var_5))) : (arr_1 [i_1])))));
                    arr_14 [i_1] [i_2 - 1] [6] [i_2] = (max(((((arr_2 [i_2 + 2]) || (arr_2 [i_2 - 1])))), (arr_2 [i_2 - 2])));
                    var_16 = (min((((!(arr_6 [i_2] [i_2 - 1] [i_2])))), (((arr_6 [i_2] [i_2 + 1] [i_2]) ? (arr_6 [i_2] [i_2 - 1] [i_2]) : var_2))));
                    arr_15 [i_1] [i_1] [i_2] [i_2] = ((((max(18446744073709551599, ((min(var_1, var_1)))))) ? 23167 : (max((((arr_11 [i_1]) ? var_6 : 65535)), (arr_12 [0] [i_2] [i_2] [i_2])))));
                }
            }
        }

        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            var_17 = 0;
            var_18 = (min((var_9 % var_4), (arr_17 [i_1] [i_4])));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_19 = (var_4 ? (min((~var_8), -6)) : (max((32754 >= 12), ((var_5 ? 622245355 : var_9)))));
                            var_20 = (max(42369, (min((arr_18 [i_1] [i_1] [i_1]), (((!(arr_1 [i_7]))))))));
                            var_21 = (((32765 || 11106) ? (((!(((var_9 ? (arr_6 [i_5] [i_5] [i_7]) : var_4)))))) : 2047));
                            var_22 *= ((!(arr_12 [i_1] [i_4] [14] [13])));
                            arr_25 [i_7] [i_6] [i_5] [i_4 - 1] = ((var_1 <= ((min((arr_4 [i_7 - 3] [i_7 - 3]), (arr_4 [i_7 + 1] [i_7 + 1]))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        var_23 = (arr_3 [i_8] [i_8]);
        arr_28 [i_8] [16] = ((!((((min(65, (arr_24 [i_8] [i_8] [i_8] [i_8]))))))));
    }
    #pragma endscop
}
