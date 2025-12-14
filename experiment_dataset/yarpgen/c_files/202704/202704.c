/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (((-9223372036854775785 ? -1106307501109348722 : 63327)));
                    arr_9 [i_0] [11] = (var_6 ? ((((((arr_2 [i_0]) & var_2))) ? ((((arr_6 [i_0] [8] [i_2]) + var_5))) : ((var_10 ^ (arr_4 [i_0] [i_1 - 3] [i_1 - 3]))))) : (((+((((arr_4 [1] [1] [i_2]) <= (arr_3 [i_0] [i_0]))))))));
                    arr_10 [i_2] [i_0] [i_0] = 5498598843367617181;
                }
            }
        }
    }
    var_21 = (min(var_0, ((((var_1 | var_2) > (var_0 & 1577582590))))));
    #pragma endscop
}
