/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 -= ((((min(1, 10565))) >> (11504946938803761970 - 11504946938803761944)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 += (max(((((max((arr_8 [i_0] [i_0] [7] [i_0]), var_2))) ? (((arr_4 [i_0]) ? var_4 : var_6)) : (((arr_6 [i_1] [i_0]) ? (arr_8 [i_0] [i_1] [i_2] [i_0]) : var_6)))), ((max(-32752, 15515)))));
                                var_16 += (var_11 & var_12);
                            }
                        }
                    }
                }
                arr_14 [11] [1] [1] = (((((arr_6 [i_1] [17]) || (arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]))) ? (max((max(var_3, (arr_0 [4] [4]))), ((min((arr_5 [i_0] [i_0] [i_1]), var_10))))) : ((((var_8 / var_6) ? ((var_12 * (arr_6 [21] [11]))) : (arr_6 [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_25 [15] = (((((var_3 ? var_5 : (arr_3 [i_0])))) ? ((var_4 ? (arr_17 [19] [1]) : ((var_7 ? (arr_1 [i_6]) : var_7)))) : (((!(((11737724 ? 3249 : -1))))))));
                                arr_26 [i_0] [i_1] [i_0] [i_6] [4] = arr_24 [i_0] [i_1] [i_5] [i_5] [i_7];
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((max(var_3, var_8)));
    #pragma endscop
}
