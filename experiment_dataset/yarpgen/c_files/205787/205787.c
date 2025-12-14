/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (!(((arr_0 [i_0]) >= (arr_0 [i_0]))));
        var_10 = ((((((min((arr_0 [i_0]), (arr_0 [i_0])))) * var_8))) && (arr_1 [i_0]));
        var_11 &= ((((min((((var_1 ? var_5 : 65534))), 140737484161024))) ? (((arr_1 [3]) ? -140737484161025 : ((min((arr_0 [i_0]), (arr_0 [1])))))) : (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    var_12 = (min(var_12, var_5));
    var_13 = (min(var_13, (((var_2 ? (((0 ? 18033269596003672946 : 413474477705878650))) : var_8)))));

    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_14 = (max(var_14, ((min((max((((413474477705878670 >= (arr_3 [i_1])))), (max(var_0, (arr_4 [2]))))), ((max(60537, (arr_4 [i_1 - 1])))))))));
        var_15 = (min(var_15, (((-(arr_4 [i_1]))))));
        var_16 -= 19313;
        var_17 = (min((max(873095735589117879, (17592186044415 > 0))), (((((((arr_3 [3]) * (arr_4 [i_1 - 1])))) ? ((max(0, 27446))) : (arr_4 [i_1 - 1]))))));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_18 = arr_4 [7];
        arr_7 [i_2 - 2] [i_2] = ((-((min((arr_4 [i_2 + 2]), (arr_4 [i_2 - 1]))))));
        var_19 = ((((max(91, 0))) && ((min((arr_4 [i_2]), (arr_4 [i_2 + 1]))))));

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_20 = (max(var_20, 18446726481523507200));
            var_21 -= var_6;
            var_22 = (max(var_22, -3749983535657912875));
            var_23 = (min(var_23, ((min((((arr_5 [i_2 + 2]) ? (((((arr_6 [i_2 + 2]) + 9223372036854775807)) << (var_5 - 169))) : (arr_6 [11]))), ((min(((18446726481523507200 ? (arr_4 [i_3]) : (arr_5 [i_3]))), (arr_3 [19])))))))));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_24 &= min(((min((arr_4 [i_4 - 1]), ((-1 ? 128 : (arr_9 [i_4])))))), 3794204691);
            arr_12 [i_4] [i_4] = 562949684985856;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_25 = (arr_16 [i_2 + 1]);
            var_26 = (!18033269596003672937);
        }
    }
    for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
    {
        arr_19 [i_6] = -9223372036854775807;
        arr_20 [i_6 - 2] = (((164 - 2576942929) - 73));
    }
    for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] [i_7] = ((((((min(0, 2147483647)) << (min(1, var_9))))) ? -3749983535657912875 : (max((min(117, var_6)), ((min((arr_3 [i_7]), var_5)))))));
        arr_25 [i_7] = ((+(min(((var_8 ? (arr_14 [i_7 - 2]) : 0)), (arr_14 [i_7])))));
        arr_26 [i_7 - 2] = (max(5677786404466924037, 192));
        var_27 = (max(var_27, ((max((min(2147483641, -1)), (max(32768, 2147483649)))))));
        var_28 = (min(var_28, ((min((max(-1, 12482)), var_3)))));
    }
    #pragma endscop
}
