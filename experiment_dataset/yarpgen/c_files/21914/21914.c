/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!((!((((-124 + 2147483647) << (var_12 - 13162349900769185617)))))));
    var_14 = -1029095628;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_0] [i_0] = ((((((min(-7349, (arr_0 [5])))) / (max((arr_3 [i_0] [i_0] [14]), 0)))) + -3066505675335287610));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = ((((((arr_4 [i_2 - 1] [i_1] [i_0]) + 3))) ? (((16 <= (arr_3 [i_1 + 2] [i_0] [i_0])))) : (arr_5 [i_1 - 1] [i_1 - 1] [i_3])));
                                var_16 = (min(var_16, (((((arr_10 [i_1 + 1] [i_1 + 1]) ? (arr_10 [i_1 - 2] [i_1]) : (arr_10 [i_1 - 1] [i_1])))))));
                            }
                        }
                    }
                    var_17 = (min(var_17, ((-(max((max(var_2, 1)), ((var_2 / (arr_10 [8] [i_1])))))))));
                    arr_11 [i_0] [i_0] [i_0] = (((207 << var_2) ? (arr_7 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2] [i_2]) : (((((((arr_0 [i_0 + 1]) ? 2147483647 : 46446)) >= (arr_5 [i_0 + 2] [i_0 + 2] [i_2 - 1])))))));
                    var_18 += ((var_2 ? (((-7337 & var_9) ? var_5 : (~-7349))) : (((!((max((arr_4 [i_1 - 3] [i_1 - 3] [i_0]), 29))))))));
                }
            }
        }
    }
    #pragma endscop
}
