/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = -35;
                    var_13 &= (max((min(var_5, -var_0)), ((((arr_4 [0] [0]) <= -123)))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_14 = (min(var_14, (((!((min((arr_9 [i_3] [i_3]), var_4))))))));

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_15 += (min(-95, 40));
            var_16 = (min(var_16, ((min((arr_7 [i_3]), (min((arr_7 [i_3]), var_3)))))));
        }
        var_17 = (min(var_17, (arr_10 [i_3])));
    }
    var_18 += ((-(-32767 - 1)));
    var_19 = var_3;
    #pragma endscop
}
