/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_14 = (min(var_14, ((((arr_2 [i_0] [i_0]) | (((40637 ? 0 : var_9))))))));
        arr_4 [i_0] &= ((!(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            arr_13 [i_1] [i_1] = ((((max((min(9875240099072703299, 9875240099072703276)), (~var_3)))) ? ((min((0 || var_6), (min(31438, 16050))))) : (((arr_3 [i_2]) | 27556))));
            var_15 = ((var_8 ? (31459 ^ 9870801089539911706) : 7444952678034250616));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_16 [i_1] [9] [i_1] = ((min(((18446744073709551613 ? var_12 : var_2), (arr_7 [i_1])))));
            arr_17 [i_1] = ((-((18446744073709551615 ? (min(35109, (arr_12 [i_3] [6]))) : (min(2646019738805374960, (arr_8 [i_3])))))));
            var_16 &= ((((((arr_0 [i_1]) % ((~(arr_7 [i_1])))))) ? ((((((arr_9 [7] [7]) | var_3))) ? ((((arr_14 [i_3] [11] [i_1]) ? var_2 : 1))) : (min(13319745541841545718, var_10)))) : (((((95 << (arr_10 [i_3]))))))));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            arr_20 [i_4] = (((max((((arr_7 [i_1]) ? (arr_8 [i_1]) : var_1)), (18446744073709551615 & var_12))) | (((max((max(37835, 4)), (min(6, (arr_6 [i_1])))))))));
            var_17 = (min((((((arr_11 [i_1] [i_4]) <= 1)) ? (arr_14 [i_1] [0] [9]) : ((var_6 ? var_5 : (arr_11 [i_4] [i_1]))))), (((var_11 ? 251 : 1)))));
        }
        arr_21 [i_1] [i_1] = (((226 <= 5126998531868005898) + ((~(arr_6 [i_1])))));
    }
    var_18 |= (max((max(var_1, (11125587970044889129 <= 14355087630748858483))), var_12));
    var_19 = ((var_11 ? ((var_7 ? -14064203423260861528 : var_0)) : ((max((var_3 + 34072), (var_4 - var_13))))));
    #pragma endscop
}
