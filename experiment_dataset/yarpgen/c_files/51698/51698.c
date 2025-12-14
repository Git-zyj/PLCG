/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((max(var_0, var_2))), (((4 / ((var_4 ? -93 : var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [1] [4] |= (min((((!(arr_1 [i_1])))), (((((var_0 ? (arr_1 [i_1]) : var_11))) ? (max((arr_0 [i_1]), (arr_3 [i_0] [i_1]))) : (arr_0 [i_0 + 1])))));
                var_14 = (max(var_14, (((!(((arr_2 [i_0] [i_0 - 1] [i_0 + 1]) && (arr_3 [i_0] [i_0 - 1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_1] [i_1] [i_3] [i_0] |= (((((var_12 ? var_9 : (arr_8 [18] [i_1] [i_1] [i_1]))) >> (((((arr_0 [i_2]) ? var_8 : (arr_6 [i_0 + 1] [i_0 + 1] [i_3]))) - 12)))));
                            arr_11 [i_0 - 1] [i_1] [11] [i_2] [i_1] = (((((arr_5 [i_0 + 1] [i_1]) + 2147483647)) << (((min(var_12, var_2)) - 278945420))));
                            var_15 = (max(var_15, (((((max(((var_10 ? (arr_9 [i_0 - 1] [i_1] [i_2 + 1] [i_3]) : 0)), ((0 ? (arr_2 [i_0] [i_0] [i_3]) : var_6))))) ? (((((-(arr_3 [11] [i_2 + 1])))))) : (((-1 > -1) ? ((((!(arr_9 [15] [i_2 - 1] [1] [i_0]))))) : (min((arr_5 [i_3] [i_3]), var_10)))))))));
                            var_16 -= (max((((var_5 ? -2837 : var_9))), (((var_6 + var_0) ? -101 : (arr_7 [i_0 + 1] [i_3])))));
                        }
                    }
                }
                arr_12 [i_1] = (((((~(var_5 < 0)))) ? ((((max(1, var_9))) ? ((var_3 ? 1 : (arr_9 [i_1] [i_1] [15] [i_0 - 2]))) : var_0)) : (((!((((arr_8 [i_0 - 1] [15] [i_0 - 1] [i_0 - 1]) ? (arr_5 [i_0] [i_1]) : var_10))))))));
            }
        }
    }
    var_17 = (min((((((var_0 ? 2856 : var_5))) ? (((var_3 + 9223372036854775807) << (var_12 - 278945420))) : (max(-30, 9223372036854775807)))), (((-1 ? (((var_2 ? var_5 : var_1))) : (~var_7))))));
    var_18 = (min(var_18, (((var_11 > (max(((14 ? 1 : 127)), (!4294967295))))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                arr_18 [i_4] [i_5] [8] &= (max((min((max((arr_16 [i_5] [i_4]), var_3)), (((~(arr_15 [i_4])))))), (((((max(var_8, (arr_16 [i_4] [i_4])))) ? var_11 : ((var_0 ? (arr_16 [i_4] [i_4]) : (arr_16 [i_4] [4]))))))));
                var_19 -= (max((max(var_12, (var_0 || var_8))), (min(var_3, ((1 ? 0 : (arr_14 [2])))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_20 -= (min(42, var_6));
                            var_21 = (min(var_21, ((((((~((min((arr_14 [2]), var_4)))))) ? ((((var_11 ? var_7 : var_3)))) : (11243950737230546698 < var_3))))));
                        }
                    }
                }
                var_22 = (((((!var_11) ? var_3 : (var_0 % var_3))) ^ ((max((arr_21 [i_5] [i_5]), (arr_20 [i_4] [i_5] [i_5]))))));
            }
        }
    }
    #pragma endscop
}
