/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (max(var_4, (((((var_2 ? var_6 : var_3))) * ((2147483647 ? var_8 : var_7))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (arr_5 [i_2] [i_2])));
                    var_13 = (min(var_13, ((min(((-22676 ? 1 : -2147483638)), (((arr_5 [i_0] [i_0]) ? ((2147483647 ? 65535 : 19617)) : ((12682152409473283183 ? 45918 : var_6)))))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (((((var_1 * (arr_6 [i_0] [i_1] [i_2])))) ? ((9425990120311310660 ? 13635698014141765623 : 105)) : (45910 != 254)));
                }
            }
        }
        var_14 = (((((max(18446744073709551615, 64)))) ? ((-var_2 ? (1543489832 & -2147483647) : (arr_3 [i_0] [i_0]))) : (((min((arr_6 [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_0])))))));
        arr_10 [i_0] [i_0] = ((((((54792 >= (-127 - 1))) ? ((10695 ? (arr_1 [i_0] [i_0]) : 1364)) : 45919)) < (((((((((arr_7 [i_0] [i_0] [i_0] [i_0]) + 2147483647)) << (((((arr_7 [i_0] [4] [i_0] [i_0]) + 131)) - 26)))) <= (((arr_8 [i_0]) ^ 25))))))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    arr_20 [i_4] = (((arr_15 [16] [i_4] [i_5]) ? (arr_12 [i_3]) : (((((var_7 ? var_5 : var_4))) ? var_0 : ((var_10 ? (arr_17 [i_4] [i_4]) : var_7))))));
                    arr_21 [i_3] [i_4] [i_3] = (arr_14 [i_3] [i_3] [i_4]);
                    var_15 = (((((24702 ? ((((var_1 <= (arr_16 [i_4 - 1]))))) : (((arr_11 [i_3] [i_5]) ? (arr_14 [i_3] [i_3] [i_5]) : var_8))))) ? (((var_1 ? 13965126880793647590 : (arr_13 [i_3])))) : (arr_16 [i_3])));
                }
            }
        }
        var_16 *= ((((max(var_5, 33995))) <= (24 ^ 17063)));
        var_17 = ((var_6 ? ((min((arr_17 [20] [i_3]), (var_4 < var_8)))) : (min((max(var_3, var_7)), (((arr_13 [i_3]) ? 1 : var_0))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] = ((-(arr_16 [i_6])));
        arr_26 [i_6] [i_6] = ((1 ? 2147475456 : 35));
        arr_27 [i_6] = arr_24 [i_6];
    }
    var_18 = (~16128);
    #pragma endscop
}
