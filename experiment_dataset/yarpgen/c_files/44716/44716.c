/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = ((((min(((min(var_9, var_6))), (arr_7 [i_0] [i_1 - 1] [i_0])))) && ((min((arr_2 [i_0]), (arr_5 [i_0] [i_1 - 1] [i_0]))))));
                    arr_9 [i_0] = (437999307 ? 4294967232 : 4);
                    var_12 = (min(((~(arr_5 [i_0] [i_1] [i_0]))), ((min((-127 - 1), -17253)))));
                    var_13 = ((((arr_3 [i_0]) ? var_5 : (arr_3 [i_0]))));
                }
            }
        }
        var_14 = min((!4), (min(56365, 1534122474)));
        var_15 *= ((((arr_3 [i_0]) * (arr_0 [i_0]))));
    }
    var_16 = 252;
    var_17 = var_0;
    #pragma endscop
}
