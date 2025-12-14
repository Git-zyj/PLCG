/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((8267857157546707221 > (arr_1 [i_0 + 1])))));
                arr_5 [i_1] = 18446744073709551609;
                arr_6 [i_0] [i_1] = (((~8267857157546707221) ? ((((arr_0 [i_0 - 1]) == (arr_0 [i_0 - 1])))) : (((!(arr_2 [i_0] [i_0] [i_0]))))));
                arr_7 [i_0] [6] [i_1] = var_9;
                arr_8 [8] &= (max(18446744073709551609, (arr_3 [i_0 - 1] [i_1 - 1] [1])));
            }
        }
    }
    var_17 = ((var_9 ? ((((-8267857157546707221 ? var_1 : var_13)) - -8267857157546707207)) : var_14));
    var_18 &= var_4;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            {
                var_19 = (min((((((((arr_13 [i_2]) ? (arr_10 [i_2] [i_2]) : (arr_12 [i_2] [i_3 - 1] [i_3])))) && ((min(var_2, (arr_10 [i_2] [1]))))))), 8267857157546707222));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_20 = (min((max(((-8267857157546707207 ? (arr_9 [i_2]) : 32767)), -8267857157546707207)), (-32767 - 1)));
                                arr_22 [i_2] [i_2] [16] [i_2] [i_3] = (i_3 % 2 == zero) ? ((((((((min(6, -1))) ? (arr_14 [i_3] [i_6]) : (min(var_1, (arr_16 [i_2] [i_3] [11] [i_5 + 1] [i_6 - 3] [i_3])))))) ? (((arr_21 [i_5 - 1] [i_6 - 3] [i_3] [i_6] [i_6]) << (((arr_21 [i_5 - 1] [i_6 - 1] [i_3] [i_6] [i_6 - 3]) - 3345)))) : 1))) : ((((((((min(6, -1))) ? (arr_14 [i_3] [i_6]) : (min(var_1, (arr_16 [i_2] [i_3] [11] [i_5 + 1] [i_6 - 3] [i_3])))))) ? (((((arr_21 [i_5 - 1] [i_6 - 3] [i_3] [i_6] [i_6]) + 2147483647)) << (((((((arr_21 [i_5 - 1] [i_6 - 1] [i_3] [i_6] [i_6 - 3]) - 3345)) + 33150)) - 16)))) : 1)));
                                arr_23 [i_4] [i_4] [i_4] [i_4] [i_3] = (((min((arr_10 [i_5] [i_5]), -var_14)) >> (min((min(var_8, 19)), 32757))));
                                arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] = (min(((max(86, ((var_5 ? 32765 : var_1))))), (!var_9)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
