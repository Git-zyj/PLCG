/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 -= (((((((-1 ? var_3 : var_3))) ? ((var_5 ? var_4 : var_3)) : 45)) | ((((arr_2 [i_2]) ? var_11 : var_5)))));
                                var_14 = var_12;
                                var_15 = (((((~(arr_5 [i_1] [i_1 + 1] [i_1 - 1])))) ? (((min((arr_4 [i_1] [i_1 - 2] [i_1 - 2]), (arr_5 [i_1] [i_1 - 1] [i_1 - 2]))))) : (4294963200 | 6144)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((((((arr_10 [i_1] [i_1 - 1] [i_1 + 1] [i_0]) || (arr_4 [1] [i_1] [i_1 + 1]))) ? (!var_11) : ((max(var_9, (arr_4 [1] [1] [i_1 - 1])))))))));
                            var_17 += (!(((((min(9, var_6))) ? (arr_5 [i_1] [i_1 - 2] [i_1 + 1]) : (((!(arr_5 [i_0] [i_1 - 2] [i_6]))))))));
                            var_18 = ((((var_11 >= (arr_15 [i_0] [i_1 + 1]))) ? (max((((arr_8 [i_0] [i_0] [i_0] [i_5] [i_6] [1]) ? (arr_13 [i_6]) : var_2)), var_10)) : (arr_8 [i_5] [3] [i_5] [3] [i_5] [i_5])));
                            var_19 = (max(var_19, (((4096 - 7408692486176501709) ? (((((var_7 ? 15225 : var_12))))) : ((1 ? 18446744073709551615 : ((((-117 && (arr_0 [i_6] [9])))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_21 [9] [i_1] [9] [9] = ((var_5 ? (max(((31 ? 3090376042834546526 : 4294963200)), (var_8 * -26542))) : (max((arr_13 [i_0]), 6136))));
                            arr_22 [i_0] [10] [i_7] [1] = ((((!(((6149 ? 65506 : var_0))))) ? (((!(arr_8 [i_0] [i_1 - 1] [i_7] [1] [i_0] [i_1 - 1])))) : (!var_3)));
                        }
                    }
                }
                arr_23 [i_0] [i_1 + 1] = ((30319 ? -3437736022121708547 : 32766));
                var_20 |= (!var_2);
            }
        }
    }
    var_21 = ((4294963200 ? var_0 : 32767));
    #pragma endscop
}
