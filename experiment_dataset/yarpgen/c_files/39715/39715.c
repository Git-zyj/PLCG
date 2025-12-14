/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_9);
    var_17 = (min(var_13, (var_2 && var_11)));
    var_18 = var_11;

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((~(((arr_0 [i_0 + 1] [1]) ? -4976826833562706154 : (((arr_0 [i_0 - 1] [i_0 - 1]) ? (arr_0 [i_0] [i_0 - 1]) : 49))))));
        var_19 *= 42;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = var_1;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {
                        var_20 -= ((((arr_16 [i_4 + 1] [i_1 + 1] [i_3] [i_2 + 1]) ? ((max(var_5, (arr_12 [i_3] [i_2])))) : 12600)));
                        var_21 = ((+((max((arr_12 [i_2 + 1] [0]), (arr_7 [i_2] [3]))))));
                        var_22 = (((((min(52935, 52962))) ? 12574 : ((1 ^ (arr_13 [i_1] [i_2] [0] [1]))))));
                        var_23 *= (max((max((arr_14 [i_2] [i_2 + 1] [i_1 + 1] [i_4 + 1]), (arr_14 [8] [i_2 + 1] [i_1 + 1] [i_4 + 1]))), (arr_7 [8] [i_1 + 1])));
                    }
                }
            }
        }
        var_24 = (arr_10 [i_1] [i_1 - 1]);
        var_25 = ((max(((-(arr_11 [i_1 + 1]))), 52919)));
        arr_18 [i_1] = ((((max(12616, var_9)) < (593199536 % var_1))));
    }
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        var_26 = (~1);
        var_27 = ((((min((arr_19 [i_5 - 2]), (arr_19 [i_5 - 1])))) ? (arr_19 [i_5 - 2]) : (arr_19 [i_5 - 2])));
        var_28 = var_12;
    }
    #pragma endscop
}
