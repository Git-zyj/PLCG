/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (max((arr_1 [i_0] [4]), (((var_0 || (arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = (((((((arr_0 [i_0] [i_0]) ? (arr_0 [1] [i_0]) : (arr_0 [i_0] [i_0]))) + 2147483647)) << (((min((arr_0 [i_0] [i_0]), 18446744073709551615)) - 18446744073709551530))));
        arr_5 [i_0] = ((+(max(((((-2147483647 - 1) >= 23021))), (arr_1 [i_0] [16])))));
        arr_6 [0] &= (max((((arr_0 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))), (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
                        {
                            var_20 = var_2;
                            var_21 += ((!(arr_2 [i_0] [i_0])));
                            arr_20 [12] [i_1] [i_1] [12] [i_4] [i_1] = (((!var_1) ? (((arr_0 [i_0] [i_0]) ^ var_9)) : 23022));
                        }
                        for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_22 = (1 ? (arr_15 [i_0] [i_0] [i_0] [i_0]) : -5784680665638558960);
                            arr_25 [i_0] [i_1] [i_0] [i_3] [i_5 - 1] = (arr_18 [i_1] [i_1] [16] [i_1] [i_1] [15]);
                        }
                        for (int i_6 = 3; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, ((max((((var_8 ? 18779 : var_13))), ((var_11 % ((var_15 ? (arr_19 [i_1] [i_1]) : (arr_16 [i_1] [i_2] [i_1] [i_2]))))))))));
                            var_24 = (((((arr_18 [i_6] [i_3] [i_2] [i_1] [i_0] [i_0]) ? (((((arr_11 [i_0] [i_1] [i_6] [i_1]) != var_11)))) : ((var_1 ? var_13 : (arr_12 [i_0] [1] [i_1] [i_0]))))) % ((max((-23044 & var_19), 3139716688)))));
                            arr_28 [i_6] [i_1] [i_1] = (((arr_18 [i_6 - 3] [i_6 - 2] [i_6] [i_6 + 1] [i_6] [i_6 - 3]) ? (max((arr_23 [i_6 - 1] [i_6 + 1] [i_6] [i_6 - 3] [i_6]), (arr_18 [i_6 + 1] [i_6 + 1] [14] [i_6 + 1] [3] [i_6 + 1]))) : (((arr_23 [i_6 - 3] [i_6 + 1] [i_6 - 1] [i_6 - 1] [1]) ? (arr_23 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_6]) : (arr_23 [i_6 - 1] [i_6 - 2] [i_6] [i_6 - 2] [i_6])))));
                            arr_29 [i_0] [i_1] [i_2] [i_6] [i_6] = 226;
                            var_25 = (min(var_25, (((var_3 >= (arr_22 [i_0] [i_0] [i_2] [i_3] [i_6]))))));
                        }
                        arr_30 [i_3] [i_2] [i_1] = (((0 % -96) << (6 != 896)));
                        var_26 = ((var_7 ? 211 : (arr_23 [i_3] [i_1] [i_2] [i_1] [i_0])));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_27 += ((((arr_31 [i_7]) ? (arr_32 [i_7] [i_7]) : var_7)));
        var_28 = ((((((((-905 ? 226 : 1))) ? 1 : (max(65535, (arr_32 [i_7] [i_7])))))) ? (min((((-1601777239 * (arr_32 [i_7] [i_7])))), var_2)) : (((arr_32 [i_7] [i_7]) & var_16))));
    }
    var_29 = var_9;
    var_30 -= 0;
    var_31 = (((((1073741823 ? var_9 : ((23043 ? var_9 : var_2))))) ? (((var_12 + (!2147483647)))) : ((var_12 ? ((var_10 ? var_16 : var_2)) : (var_0 ^ var_16)))));
    #pragma endscop
}
