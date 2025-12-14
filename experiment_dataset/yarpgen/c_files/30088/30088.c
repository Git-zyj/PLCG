/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (-((+(min((-127 - 1), var_6)))));

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = var_9;
            var_15 = (((arr_3 [i_0 + 1]) < (((min(var_2, 22))))));
            var_16 = (min(var_8, (((arr_3 [i_1 + 2]) ? (arr_0 [i_1 + 1]) : var_1))));
        }
    }
    var_17 = ((!(((~(var_6 / var_11))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {
                var_18 = ((2 ? 0 : (((arr_6 [i_2] [i_2 + 2]) & (max((arr_1 [i_2] [i_2]), 0))))));
                var_19 = (max(var_19, (arr_6 [4] [4])));
                var_20 = (arr_11 [i_2] [i_2]);

                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    var_21 = (max(var_21, (((((max((arr_9 [i_2 + 2]), (arr_7 [i_2 + 2])))) ? ((var_7 ? (arr_11 [i_4 - 2] [i_4]) : (arr_11 [i_4 - 2] [i_4]))) : (((arr_1 [i_2 + 2] [i_2 + 2]) * (arr_11 [i_2 + 2] [i_4]))))))));
                    var_22 = (min(var_22, ((max((arr_3 [i_4 + 1]), ((((arr_1 [i_2] [i_3]) || (arr_6 [i_4] [i_3])))))))));
                    arr_16 [i_2 - 1] [i_2] = ((~(((arr_9 [i_2]) | ((var_8 ^ (arr_12 [i_2] [i_3] [i_4])))))));
                    var_23 *= (max((((arr_10 [i_2]) ? (4294967295 ^ 1073741823) : (((max((arr_10 [i_2]), (arr_6 [i_4] [i_3]))))))), (~4294967295)));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_20 [i_2] = ((+(max((arr_7 [i_2 + 2]), (arr_6 [i_2] [i_3])))));
                    var_24 = ((((((arr_4 [i_3 + 4] [i_3] [i_2]) * (arr_4 [i_3 + 3] [i_3] [i_2])))) || ((!((max((arr_12 [i_2] [i_3] [i_5]), var_5)))))));
                    var_25 = (arr_15 [i_2] [i_3]);
                }

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_26 = (((((arr_12 [i_2] [i_3 - 1] [i_7]) ? (arr_12 [i_2] [i_3 - 1] [i_3]) : (arr_12 [i_3] [i_3 - 1] [i_6])))) ? (((9 && (arr_13 [i_2] [i_3 - 1] [i_6])))) : (((arr_12 [i_2 - 1] [i_3 - 1] [i_6]) ? (arr_13 [i_6] [i_3 - 1] [i_6]) : (arr_15 [i_2] [i_3 - 1]))));
                        var_27 = (arr_1 [i_3 + 2] [i_2 - 1]);
                    }
                    for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
                    {
                        var_28 = 4294967267;
                        var_29 = (min(((-(min((arr_12 [i_2] [i_2] [i_2]), 28)))), ((max(113, ((max(0, 1))))))));
                        var_30 = (min(var_30, var_3));
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        var_31 = (((((arr_31 [i_2] [i_3] [i_6] [i_9]) <= (arr_10 [i_2 + 2]))) ? var_1 : 16383));
                        var_32 = (var_4 * (arr_9 [i_2]));
                    }
                    var_33 = 8;
                }
            }
        }
    }
    #pragma endscop
}
