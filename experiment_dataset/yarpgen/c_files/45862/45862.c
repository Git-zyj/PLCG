/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_1 | (max((59 < -59), (~var_2)))));
    var_20 = (((min(((var_2 << (var_5 - 1039571868116709280))), (((-59 ? var_8 : 3))))) % var_15));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (((var_15 >= (((((0 ? (arr_2 [i_1 + 1] [i_1]) : (arr_1 [1])))) ? 59 : -1)))))));
                    arr_9 [i_1] [i_1] [i_1] = var_17;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_22 *= ((var_6 ? (arr_4 [i_1 + 1] [i_2] [i_2]) : (arr_6 [i_1 + 1] [i_2] [i_2] [i_2 + 1])));
                        arr_12 [i_1] = (((!-7554914798910834981) % ((173 ? 158 : (arr_5 [i_3] [i_2] [6])))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        var_23 = (((arr_6 [i_2 + 1] [i_2] [i_2 + 1] [i_4]) ? ((-(arr_14 [i_4] [i_2] [i_1] [i_0]))) : (!56)));

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_24 = (max(var_24, (~0)));
                            var_25 = (arr_5 [i_0] [i_4] [i_4]);
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_26 &= ((-(!73)));
                            var_27 = (max(var_27, (((!(var_7 * var_12))))));
                            var_28 = ((~((((-14 ? (arr_1 [14]) : 7967640567899798172)) | ((var_4 ? var_2 : var_17))))));
                            arr_21 [i_0 - 1] [i_0 - 1] [i_0] [i_2] [i_2] [i_0 - 1] &= (((((min(59, (arr_19 [i_6] [i_1] [i_2] [i_4] [i_6] [i_6])))) != (((var_14 > (arr_14 [i_6] [i_2] [i_1] [i_0])))))));
                        }
                    }

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_24 [16] [i_0] [i_0] [i_0] [i_7] [i_7] &= (max(-11, 0));
                        var_29 = ((+(((-32767 - 1) ? 1 : ((-(arr_4 [i_7] [i_2 - 1] [i_0])))))));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_30 = max(173, 89);
                        var_31 = (min(var_31, ((((((-(arr_5 [7] [i_1 - 1] [7])))) || ((((arr_5 [i_1] [i_1 + 2] [i_1]) % -7992))))))));
                        var_32 = (((((~(arr_20 [i_0])))) ? ((-(arr_10 [i_0] [i_1 - 1] [i_0 + 1] [i_0]))) : (((!(arr_23 [i_0] [i_0] [i_0 - 1] [i_1] [i_0] [8]))))));
                        var_33 += (((~144115050636902400) > (((((arr_0 [i_0 - 2]) <= (arr_0 [i_0 + 1])))))));
                        arr_27 [i_0] [i_1] [i_2] [i_2] [4] [i_0] &= (((arr_4 [i_1 + 1] [i_1 + 1] [i_0]) ? (arr_8 [i_2 + 1]) : var_8));
                    }
                    var_34 = ((((!-23748) ? 50481 : ((0 ? var_2 : -59)))));
                }
            }
        }
    }
    var_35 = (min(var_35, var_6));
    #pragma endscop
}
