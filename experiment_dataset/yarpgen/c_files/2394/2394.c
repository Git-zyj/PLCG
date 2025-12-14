/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((max(16423596419620168928, var_7))) && (var_1 % var_6))) ? var_16 : ((~(var_19 & 7370)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = ((!((min(8785862496075090982, (arr_6 [i_0] [i_0] [i_0] [i_0]))))));

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_21 = ((!(-9223372036854775807 - 1)));
                        arr_12 [i_1] [i_1] [i_1] [11] = ((var_16 / ((min(var_12, (((!(arr_5 [i_2] [i_2] [10])))))))));
                        var_22 |= (min(var_6, ((-(((arr_5 [i_3] [i_1] [14]) ? 121 : 848618606))))));
                    }
                }
            }
        }
    }
    var_23 |= 4447189445929587981;
    #pragma endscop
}
