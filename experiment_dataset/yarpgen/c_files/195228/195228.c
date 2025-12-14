/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((-7947664081940920388 <= ((max(var_1, -20641)))))), ((max(var_7, 6314)))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_18 = (((((((((-4149 + 2147483647) << (906112806875271798 - 906112806875271798)))) ? ((((!(arr_2 [5] [i_0]))))) : (((arr_0 [i_0]) + (arr_1 [1])))))) ? ((~(arr_2 [i_0] [i_0 - 1]))) : var_16));
        var_19 = var_9;
        var_20 = (min(var_20, ((max((arr_0 [i_0 + 2]), (((arr_2 [i_0] [i_0 - 1]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_21 = (min((1 & -53), ((3 / (arr_1 [i_0 + 1])))));
            var_22 = (((arr_4 [i_0 + 2] [i_0 - 1] [15]) ? (((max((arr_4 [i_0 - 3] [i_0 + 2] [i_0 + 3]), (arr_4 [i_0 - 2] [i_0 - 3] [i_0 + 3]))))) : (max((((1026018778 ? -4084 : var_9))), (((arr_0 [i_1]) * 0))))));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_23 = -19;
                            var_24 = 1;
                        }
                    }
                }
                arr_18 [i_0] [i_2] [i_3] = var_2;
                var_25 = (((arr_16 [i_2 + 1] [i_3] [1] [7] [i_3]) / (arr_15 [19] [i_2] [16] [i_2] [i_2 + 1] [0])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_26 = (((arr_19 [0]) >= 27824));
                            arr_25 [i_7] [i_6] [i_3] [9] [17] = -9150;
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                var_27 -= (min((arr_4 [i_8] [i_2] [i_0]), (max(var_6, (((254 ? 202 : 1)))))));
                var_28 += (!var_1);
                var_29 = ((1 ? var_6 : -8685178286601707238));
            }
            var_30 = (max(var_30, 60));
            arr_30 [i_0] = 14692140852389149453;
        }
        arr_31 [i_0] = (arr_1 [i_0 - 2]);
    }
    var_31 = (max(var_11, var_3));
    #pragma endscop
}
