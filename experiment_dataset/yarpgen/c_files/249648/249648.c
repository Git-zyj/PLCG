/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = (((min(var_4, ((var_10 ? 1103895716 : var_9)))) << (((!var_1) ? -28 : (var_5 || -972908210)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 -= (((((!(133 || var_8)))) ^ (arr_0 [7] [i_0 + 1])));
                var_16 -= (((min((arr_6 [i_0] [i_0 + 1]), (arr_6 [i_0] [i_0 + 1]))) ? var_10 : (((~(arr_6 [i_0] [i_0 - 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = 133;
                            var_18 = (max(var_18, ((((!var_9) ? ((max(var_10, var_0))) : ((min(var_7, ((var_7 ? var_4 : 28))))))))));
                        }
                    }
                }
                var_19 = (min(((min((arr_6 [i_0] [i_0 + 2]), (arr_6 [i_0] [i_0 + 2])))), (arr_10 [i_0 + 1] [i_0 + 1] [i_1] [i_1])));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_20 [17] [i_5] = ((((((max(255, var_7))) ? (((arr_14 [i_4]) ? var_12 : var_9)) : ((max(972908219, (arr_8 [i_0] [i_0] [i_6])))))) != (((((arr_2 [i_0] [i_1]) || var_3))))));
                                arr_21 [i_6] [i_5] [2] = ((42 ? (arr_15 [i_0] [i_1]) : ((((245 ? var_1 : -79))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (133 || var_6);
    #pragma endscop
}
