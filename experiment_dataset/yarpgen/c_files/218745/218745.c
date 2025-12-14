/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_17 = (max(var_17, ((((arr_5 [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1]) ? (arr_4 [i_1] [i_1] [i_0]) : ((min(5455, (arr_4 [i_0 - 1] [i_0 - 1] [i_1 - 3])))))))));
                            var_18 = (max(var_18, (((+((149 ? (((arr_10 [i_1 - 1] [i_2] [i_3]) & var_6)) : (arr_1 [i_0]))))))));
                        }
                    }
                }
                arr_11 [i_1] [i_0] [i_1 + 1] = ((max((arr_7 [2] [i_0 - 1] [i_1] [i_0]), (arr_7 [i_0] [i_0 - 1] [i_1] [i_0]))));
            }
        }
    }
    var_19 = ((-5456 ? (min(-14200768914179630793, var_14)) : var_4));
    var_20 = -1051546988;
    #pragma endscop
}
