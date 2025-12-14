/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0 - 3]);
        arr_3 [i_0] &= var_4;
        var_10 = (((arr_1 [i_0] [i_0 - 2]) | ((((min((arr_0 [i_0]), (-127 - 1)))) ? ((var_4 & (arr_0 [i_0]))) : (((arr_0 [i_0]) ^ 2633087545563063766))))));
        var_11 &= ((((((var_8 ? -116 : (1216080707216400844 != var_0))) + 2147483647)) >> ((((-(arr_1 [i_0 - 2] [i_0 - 2]))) - 58))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_12 -= ((-(((arr_6 [i_1] [i_1]) ? (-9223372036854775807 - 1) : var_4))));
        var_13 = (((var_4 ? var_7 : (arr_6 [i_1] [i_1]))) | (arr_4 [i_1] [i_1]));
        var_14 += (((arr_6 [i_1] [i_1]) ^ 18446744073709551615));
        var_15 = (max(var_15, 17355));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_16 = (max(var_16, 489705813));
                    var_17 = ((((((arr_11 [i_2 + 3] [i_3] [i_3 + 1]) ? (arr_11 [i_2 + 1] [i_3] [i_3 + 2]) : (arr_11 [i_2 + 2] [i_3] [i_3 - 1])))) == (((min(var_4, (arr_9 [i_4] [1] [i_2 - 1]))) & (((arr_1 [2] [3]) ? (arr_10 [i_4] [i_2]) : (arr_0 [i_3])))))));
                    arr_14 [i_3] [i_3] = ((max((((arr_12 [i_2] [1] [3] [i_4]) ? 16 : (arr_4 [i_4] [i_2]))), (9223372036854775788 % -6848298574502894850))));
                }
                for (int i_5 = 4; i_5 < 6;i_5 += 1)
                {
                    arr_18 [i_2] [i_3] [i_3] [i_5] = 414979112206591708;
                    var_18 = (min(var_18, 18446744073709551615));
                }
                arr_19 [i_2 + 2] [i_3] [i_2] = (-2147483647 - 1);
                var_19 = (min(var_19, (((54679 | var_6) && 18446744073709551615))));
            }
        }
    }
    var_20 = var_7;
    #pragma endscop
}
