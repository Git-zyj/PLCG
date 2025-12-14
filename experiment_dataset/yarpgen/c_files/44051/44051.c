/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (~var_9)));
    var_15 = ((892131068385166985 ? var_9 : var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = max((((((var_7 ? (arr_0 [i_0]) : var_5))) | (min(var_3, 17554613005324384621)))), (arr_5 [i_0] [i_0] [i_0]));
                var_17 = (max(var_17, var_9));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_2] = (var_4 ? var_3 : (arr_9 [i_2] [i_2]));
                    var_18 = var_9;
                    var_19 = ((((((arr_9 [i_2] [i_4]) ? (((arr_13 [i_2]) ? var_4 : var_9)) : (max((arr_6 [i_2]), var_8))))) ? var_2 : ((min((arr_6 [9]), ((~(arr_9 [i_2] [i_4]))))))));
                }
            }
        }
    }
    #pragma endscop
}
