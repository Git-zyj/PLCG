/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (var_3 == ((6162076964670175707 ? 1 : 4611677222334365696)));
    var_18 ^= var_7;
    var_19 = (min(var_19, ((min(((((min(var_1, var_11))) - var_3)), (~var_7))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_20 += (!(((1 ? -901123893 : 6796979844045875619))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_21 = (min((arr_8 [i_3] [i_1]), (max(1, 7083763515900273218))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] |= (((arr_13 [i_4] [i_3] [i_2] [i_1] [i_0]) * (((!-6796979844045875620) ? (arr_11 [i_1]) : (!var_16)))));
                        }
                    }
                }
            }
            var_22 = ((-(arr_1 [i_0])));
            arr_15 [i_0] = 6796979844045875637;
        }
        arr_16 [i_0] = ((((min(-17678, ((1 / (arr_2 [i_0])))))) ? 48335 : var_7));
        arr_17 [i_0] = 1;
        var_23 = ((!((min((arr_9 [10] [i_0] [i_0] [10]), (((18 ? 84464414 : 110173591923451401))))))));
        var_24 = ((!((8 || (arr_4 [i_0])))));
    }
    #pragma endscop
}
