/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((((var_9 ? (max(1, var_9)) : (var_16 ^ var_6)))) < ((((max(1307719523, var_3))) ? ((16380 ? var_3 : var_0)) : var_2)))))));
    var_20 = (max(var_20, ((max(((49171 ? var_15 : 1307719523)), (min(var_11, var_6)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [1] [i_0] |= ((((min((25 * 14808051877285044832), 2439144264))) ? (-127 - 1) : 113));
        var_21 = arr_0 [9];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, 1307719533));
        var_23 = (((((!(arr_3 [i_1])))) == (((14 != (arr_4 [i_1] [2]))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_24 = (max((((arr_1 [i_2]) % (arr_1 [i_2]))), ((~(arr_1 [i_2])))));

        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_25 *= (arr_4 [8] [i_2]);

            for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
            {
                var_26 = ((max((67 << 1), (min(1307719526, (arr_8 [i_2] [1] [i_4]))))));
                var_27 -= var_18;
                arr_12 [i_2] [15] [i_4] [i_2] = ((((((arr_3 [i_3 + 1]) ? (arr_10 [i_3 + 1]) : 1))) ? (arr_3 [i_3 + 1]) : (arr_1 [i_3 - 1])));
                arr_13 [16] [i_4] |= ((((-(max(var_9, var_12)))) < ((min((var_17 < 1), -1280129099)))));
                var_28 -= min(((-((25 ? 1855823013 : var_11)))), (((!((min((arr_7 [12]), 524032)))))));
            }
            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_29 *= (min((arr_6 [i_7] [i_3 - 1]), (arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                            var_30 = (min(var_30, (((var_18 % ((min((614589466 || 0), (!var_14)))))))));
                        }
                    }
                }
                arr_22 [i_2] = min((((!1125899906842496) ? (((var_2 ? 16379 : (arr_9 [i_5])))) : (((arr_5 [i_3] [i_3]) ? var_8 : 5)))), ((((((614589457 ? (arr_14 [i_2] [i_2] [i_5]) : (arr_6 [i_2] [i_5])))) || ((min((arr_8 [i_5] [10] [10]), (arr_17 [i_2] [i_3] [i_5] [i_5]))))))));
            }
            var_31 = ((3638692196424506796 | ((((((min(-2, 162562815))) && (-118 & var_17)))))));
        }
    }
    #pragma endscop
}
