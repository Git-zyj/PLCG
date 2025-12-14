/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = -2008098653266524292;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_13 = ((!(arr_13 [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 2])));
                            arr_15 [i_2] [i_2] [8] [i_2 + 1] [i_2 - 1] [i_0] = (((-(~var_0))));
                            var_14 = (max(var_14, (((!(((((var_8 < (arr_4 [0] [4]))) ? (arr_5 [i_0 + 1]) : ((-1651073085 ? var_7 : var_0))))))))));
                        }
                    }
                }
                arr_16 [10] [i_0] &= var_3;
                var_15 ^= (((((+(((arr_14 [10] [i_1] [i_1 - 1] [8]) ? (arr_5 [i_0]) : var_1))))) || (((-(!var_2))))));
                arr_17 [i_0] [i_0] [i_0 - 1] = ((var_5 ? (arr_9 [i_0] [i_0] [i_0]) : -1992175204));
                arr_18 [i_0] [i_0] = min((((!(arr_5 [i_0])))), ((-(min(var_10, -1182541051)))));
            }
        }
    }
    var_16 = (!var_10);
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_17 = var_2;
                            var_18 = ((var_1 ? (((~((var_7 ? var_5 : var_1))))) : var_3));
                            var_19 = (arr_20 [i_4] [i_4]);
                            var_20 = (((((arr_27 [i_4 + 1] [i_4] [i_4 - 1] [i_4]) ? -var_2 : (arr_25 [19] [i_5 - 1] [i_5] [i_5])))) ? ((var_2 ? ((var_6 ? (arr_25 [i_4] [i_4] [i_4] [i_4]) : var_7)) : -var_1)) : ((var_3 ^ (arr_30 [i_5] [i_6] [i_6 - 1] [i_6 - 1]))));
                            arr_31 [i_4] [i_4] [i_5] [i_4] = ((-(arr_29 [i_7 - 1])));
                        }
                    }
                }
                var_21 &= -var_3;
            }
        }
    }
    #pragma endscop
}
