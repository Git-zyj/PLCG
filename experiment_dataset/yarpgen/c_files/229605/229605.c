/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] = (!var_2);
                var_14 = (((var_12 < var_8) <= (arr_3 [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {
                    arr_17 [1] [15] [15] [i_3] = ((!((min((arr_7 [i_2]), (((arr_8 [i_3] [i_3]) / var_9)))))));
                    arr_18 [i_4] [i_3] [i_3] [i_2] = ((!(var_12 && var_3)));
                    arr_19 [i_2] = (max(((!(arr_9 [i_2]))), ((!((max(var_5, 2078727824043705154)))))));
                }
            }
        }
    }
    #pragma endscop
}
