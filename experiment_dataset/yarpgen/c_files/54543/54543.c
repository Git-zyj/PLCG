/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((min(var_4, var_2))) + 2147483647)) << (((!(var_6 / var_13))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_1] = (((~(((arr_2 [i_0] [i_1]) ? var_13 : 4294967295)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_2] = var_3;
                                var_17 = (var_13 <= 89);
                                var_18 = (max(var_18, ((((((+(((arr_5 [i_2] [i_3]) ? -29148 : 14336337770263992630))))) ? var_9 : (((min(var_13, (arr_0 [i_0] [i_1]))) - ((((arr_1 [i_2] [i_2 + 1]) + 181))))))))));
                                var_19 = ((((~var_12) + 2147483647)) << (((arr_5 [i_1] [i_2]) ? ((((!(arr_13 [i_3] [i_1] [i_2 - 2]))))) : var_9)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((319891125 << (var_2 - 16957056758909209748)))));
    #pragma endscop
}
