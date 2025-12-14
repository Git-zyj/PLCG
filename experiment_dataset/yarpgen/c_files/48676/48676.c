/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = (min(var_14, var_8));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (((((!(arr_0 [i_0]))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_11)) : (max((arr_0 [i_0]), (arr_1 [i_0] [i_0]))))))));
        var_16 = (max((((!(arr_0 [i_0])))), (max(var_6, 0))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            var_17 = var_5;
            var_18 *= var_5;
            var_19 = var_0;
            var_20 = ((((min(237, (arr_2 [i_2 - 2] [i_2 - 2])))) ? ((-(((arr_6 [i_1]) ? var_10 : var_7)))) : (var_10 == var_1)));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_21 = (min(var_21, (((((arr_4 [i_3]) + 2147483647)) >> ((((arr_4 [i_1]) == (arr_9 [i_1] [i_3]))))))));
            arr_11 [i_1] = (((min((arr_8 [i_1] [i_3] [i_1]), var_2)) / -255));
        }
        arr_12 [i_1] = (((((((23 ? 43 : 2129765271))) & 7252280295136237347)) % 678168183));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_22 = ((var_5 ? var_1 : (((((arr_20 [i_4] [i_5] [i_5] [i_5 + 1]) >= (arr_17 [i_6] [i_5] [i_6])))))));
                    var_23 = ((!(((+(min((arr_15 [i_4]), var_2)))))));
                    var_24 = (((var_12 | var_3) ? (min((arr_21 [9] [3] [i_6] [i_6]), (max((arr_18 [i_5] [i_5] [i_5]), -2129765270)))) : -var_2));
                }
            }
        }
        var_25 &= (arr_14 [i_4]);
        var_26 = (arr_15 [i_4]);
    }
    var_27 = var_2;
    #pragma endscop
}
