/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -var_5;
    var_17 = 2955448991;
    var_18 = var_1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 1] = (!4294967281);
        arr_3 [i_0] = ((!(!var_10)));
        arr_4 [i_0] = ((((var_10 ? 6418868877773738512 : (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0 + 1] [i_0 - 2]) : (arr_1 [i_0]));
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_19 = (min(((((arr_6 [i_1 - 1]) ? (arr_6 [i_1 - 1]) : (arr_6 [i_1 + 1])))), (min(((max(32767, 8282465718711917190))), -14872459898652392892))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_14 [i_1] &= -123;
                    arr_15 [i_2] [i_2] [17] = (max((((arr_8 [i_1 - 1] [i_1 + 1]) ? 14872459898652392879 : (arr_8 [i_1 + 1] [i_1 + 1]))), ((((arr_8 [i_1 - 2] [i_1 + 1]) / var_2)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_20 = (((((-6 ? -8883012520850414975 : -10074))) ? ((~(arr_17 [i_5 + 2] [i_5 + 2] [i_3] [i_4]))) : (arr_11 [i_1] [i_1] [i_2] [i_4])));
                                var_21 = 0;
                                arr_23 [i_2] = (arr_12 [i_3]);
                            }
                        }
                    }
                }
            }
        }
        arr_24 [i_1] = (((arr_10 [i_1] [i_1]) & (((50116 || (arr_20 [3] [i_1 - 2] [i_1 - 1] [i_1] [i_1]))))));
        var_22 = var_0;
    }
    for (int i_6 = 2; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_23 = (max(var_0, ((9223372036854775807 ? 1 : ((((arr_16 [i_6 + 1] [i_6]) * var_5)))))));
        var_24 = (min(var_24, (((((max((arr_12 [i_6 - 1]), 1339873987))) ? (arr_17 [i_6] [i_6 - 1] [i_6] [i_6 - 1]) : (((arr_12 [i_6]) ? var_13 : (arr_12 [i_6]))))))));
    }
    #pragma endscop
}
