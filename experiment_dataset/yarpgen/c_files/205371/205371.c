/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_3;
    var_16 = (~var_3);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_17 ^= ((((min(65535, ((var_4 ? 4121940692028521345 : var_3))))) ? ((((((arr_1 [9]) ? var_4 : 65535)) + 0))) : (((arr_3 [2] [i_1]) - var_12))));
                var_18 = (min(var_18, var_13));
                arr_5 [i_0] [i_1] [i_1] = (max(((min((arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1]), (arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1])))), (max((arr_3 [i_0 - 1] [i_0 - 2]), (arr_3 [i_0 - 2] [i_0 - 2])))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_2] [i_2] = (((((4618768386186404159 ? var_14 : (arr_6 [i_1] [7] [i_1])))) || ((((arr_1 [i_1]) | (arr_7 [i_2] [i_0 + 1] [i_2]))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 = ((((!(arr_2 [i_0]))) ? (arr_6 [i_0] [i_1] [i_3]) : (var_3 % 6202374617650492177)));
                        var_20 = ((((var_0 ? var_3 : 1191032944078991878)) + (arr_1 [i_2 - 2])));
                    }
                    arr_12 [6] [i_2] [4] = (((((arr_10 [i_2]) || (arr_3 [i_0] [i_1]))) ? (var_6 && 30269) : var_9));
                    var_21 = 17626369367166553801;
                }
                for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_22 = ((((+(((arr_2 [i_1]) ? var_3 : var_8))))) ? 0 : (max((((arr_0 [i_4]) ? var_11 : var_7)), ((-(arr_10 [i_1]))))));
                    var_23 = (arr_7 [i_4] [i_1] [i_4]);
                    arr_17 [i_4 + 1] [i_4] [i_4] [i_0 + 1] = (min(((var_9 << (var_12 + 6781080638700885956))), (arr_2 [i_0 + 1])));
                }
                for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_24 *= ((((((17690 || -1646960354456688630) ? (arr_8 [i_1] [10] [i_0]) : (min(var_12, var_10))))) ? (((var_2 > var_5) ? (max(17255711129630559738, var_1)) : (((var_0 / (arr_2 [i_1 + 1])))))) : (~var_12)));

                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        var_25 = (max(-4618768386186404155, (((~((64717 ? var_2 : (arr_14 [i_6] [5] [5] [i_0]))))))));
                        var_26 = ((((arr_21 [i_0] [i_5 - 2] [i_6 - 3] [i_1 + 2] [i_5 - 2] [i_0]) || var_1)));
                    }
                    arr_23 [i_0] [2] = ((-6202374617650492177 <= (!var_5)));
                }
            }
        }
    }
    var_27 = ((((((var_12 > var_7) ? ((var_7 ? var_3 : 1167452444)) : var_8))) ? 0 : (((!var_0) ? (var_3 - var_1) : var_13))));
    #pragma endscop
}
