/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max(var_4, ((var_9 ? 25 : var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = ((((((arr_2 [i_2]) ? (arr_2 [i_2]) : var_3)))) ? ((min((arr_5 [i_2 - 2] [i_2 + 1] [i_2] [i_2]), (arr_3 [i_1 + 2])))) : (arr_8 [i_1] [i_1 + 1] [1]));
                    arr_9 [i_2] [i_1] [i_1] [i_2] = ((-(((var_11 != (max((arr_4 [i_0] [6] [i_0]), var_10)))))));
                }
            }
        }
    }
    var_20 = (var_8 & var_12);
    #pragma endscop
}
