/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = -125;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = ((((min(2013379998588850677, 10245088879034290593))) ? (((((((arr_1 [i_4] [i_4]) ? 29858 : (arr_10 [i_0 + 1] [i_1] [i_2] [i_1] [i_1]))) <= var_5)))) : (max(var_5, 72057593970819072))));
                                arr_13 [i_1] [i_1] [i_1 + 2] [1] [i_1] [i_0] [i_1] = ((((!var_3) != var_10)));
                            }
                        }
                    }
                }
                var_14 = ((((((arr_10 [i_0] [i_0] [i_0] [i_1] [i_0]) ? (arr_10 [i_1 - 1] [i_1] [9] [i_0 + 1] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 + 1])))) ? (arr_10 [i_1 + 2] [i_1 + 2] [i_0 + 1] [i_1] [i_0 + 1]) : -1218159615));
                arr_14 [i_0] [i_0 + 1] [i_0] = ((((((arr_8 [i_1] [i_1] [i_0] [i_0 + 1] [i_0] [i_0]) ^ (arr_8 [i_1] [i_1] [i_1] [i_0 + 1] [i_0] [i_0])))) ? 72057593970819072 : ((min((arr_8 [i_1] [i_0] [i_1] [i_0 + 1] [i_0] [i_0]), (arr_8 [i_0 + 1] [i_1 + 2] [i_1 + 2] [i_0 + 1] [i_0] [i_0 + 1]))))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [6] [i_6] [0] [i_1] [i_0] = (arr_20 [i_0]);
                            var_15 = ((var_2 <= (((!(var_9 || 72057593970819063))))));
                            var_16 = (min((min(-12529, -1184097959445360858)), ((((var_4 ? (arr_0 [i_0]) : var_2))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, (((((12052641236079500049 != -1530781263) <= 116))))));
    #pragma endscop
}
