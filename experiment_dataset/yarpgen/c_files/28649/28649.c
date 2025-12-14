/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_8 ? 1 : -2101581968));
    var_13 = var_2;
    var_14 = (min(((-2101581968 ? 221 : var_3)), ((7298640042430973761 ? ((min(43240, 45528))) : 1))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_15 = ((~((-(arr_8 [i_0 - 1])))));
                                arr_14 [8] [i_3] = ((max(var_9, var_6)));
                                var_16 = ((((((((min(-19760, 1)))) ^ (min(1384839894, 3022323874))))) ? ((((min(var_8, (arr_4 [i_1] [i_3] [i_4])))) ? ((var_5 ? (arr_8 [i_2]) : var_6)) : (arr_2 [i_0]))) : (((~(!6609603266457023649))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1 - 1] [i_0] = ((((((((var_5 ? (arr_13 [i_0] [i_0] [i_2] [i_2] [i_0]) : var_1))) ? (1 & -26548) : (((arr_10 [i_0] [8] [i_0 + 1] [i_0] [11]) & -8445914082397460355))))) ? (((((57841 ? 1 : (arr_7 [0] [i_1 - 1] [i_0 + 2])))) ? ((29 ? 7952520491256369983 : 221)) : (min(7606687954691623248, var_1)))) : ((((25455 < var_4) ? ((min(var_10, var_10))) : -951678234)))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_17 = (((min((((!(arr_4 [i_5] [i_1] [i_2])))), ((47 ? 1 : var_5)))) / (~var_1)));
                                var_18 = ((((((-30910 * var_1) ? var_5 : ((-25455 ? var_6 : (arr_10 [i_0] [1] [i_2] [i_5] [i_6 + 2])))))) ? (((((var_10 ? (arr_20 [i_6] [i_5] [i_2] [1] [i_0]) : var_8))) ? (((arr_8 [i_6]) ^ (arr_18 [i_0] [i_1] [i_2] [i_5] [i_6 - 1]))) : var_5)) : (((((var_5 ? var_5 : var_6))) ? ((var_11 ? var_0 : (arr_20 [i_0] [i_1] [i_2] [i_5 + 3] [i_6 - 1]))) : (arr_17 [i_0] [i_5])))));
                                arr_22 [8] [i_1 - 1] [i_2] [i_5 - 1] [i_5] = min(((-64 / (~var_0))), (arr_19 [i_0 + 1] [i_2] [i_5] [i_6]));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
