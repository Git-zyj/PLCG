/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 3152021908;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_20 = (((((arr_5 [i_1] [i_1]) ? (!var_10) : (arr_4 [i_0] [i_1]))) % ((min(var_8, var_1)))));
            var_21 = (min(((((9 ? 255 : (arr_0 [22]))) * (arr_5 [i_1] [i_0]))), ((((min(2147483645, var_18)) == ((min(0, (arr_5 [i_1] [i_1])))))))));
            arr_6 [i_0] [i_0] = (min((min((max(-1, var_2)), 62)), 32754));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_9 [i_0] = ((247 ? (-1 / 18446744073709551615) : ((((arr_8 [i_2] [i_0]) / var_16)))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_22 = (max(((1888160458 ? 79 : 2147483645)), (((arr_14 [i_3 + 2] [i_0] [i_4] [i_4]) / ((min(var_11, var_3)))))));
                        arr_15 [18] [i_0] = (max((arr_11 [i_4] [i_0]), (arr_1 [i_2] [i_2])));
                    }
                }
            }
            arr_16 [i_2] [i_2] [i_0] = ((~(((~var_7) ? (((arr_2 [i_0] [i_0]) ? var_17 : (arr_4 [i_0] [i_0]))) : (arr_14 [i_2] [i_0] [i_0] [4])))));
            arr_17 [i_0] = ((210 ? 2147483629 : 1));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_23 = ((!((((arr_3 [i_5]) ? (var_6 * 4294967295) : (((((arr_12 [i_0] [i_5] [i_5] [i_5]) == var_4)))))))));
            arr_20 [i_0] = ((79 ? ((((max((arr_10 [i_0] [i_0]), (arr_18 [i_5] [8] [i_5])))) ? ((var_16 ? -26206 : 18446744073709551615)) : var_1)) : (((~(arr_1 [i_0] [i_5]))))));
            arr_21 [i_0] [i_0] [i_5] = ((((!(arr_4 [i_0] [i_5]))) ? (max((arr_14 [i_0] [i_0] [i_0] [i_0]), (((arr_2 [i_0] [i_0]) ? 1 : (arr_2 [i_0] [i_5]))))) : (((((max(-1, 1))) ? ((18446744073709551601 ? var_7 : 254)) : ((var_3 ? (arr_11 [i_5] [i_0]) : var_17)))))));
            var_24 = (max((arr_3 [i_0]), ((max((((arr_1 [i_0] [i_0]) ? var_5 : var_11)), (arr_14 [i_0] [i_0] [i_0] [i_0]))))));
        }
        var_25 -= (arr_7 [0]);
        var_26 = (((min((arr_19 [i_0] [i_0]), ((634187810 ? (arr_19 [i_0] [13]) : (arr_14 [i_0] [i_0] [i_0] [i_0]))))) % (((arr_11 [i_0] [i_0]) * (arr_11 [i_0] [i_0])))));
    }
    #pragma endscop
}
