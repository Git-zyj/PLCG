/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = var_11;
        arr_4 [i_0] [i_0] = (~var_15);
        arr_5 [i_0] = ((!((min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_18 = (min(var_18, ((max((min((arr_7 [i_1 - 2]), 23)), ((3653376421 + (arr_7 [i_1 + 2]))))))));
        var_19 -= (arr_6 [i_1 - 2] [1]);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_20 = (((((arr_13 [i_1 + 1]) ? ((min(131, 0))) : 188))) ? 231 : ((4149051708 ? 3886691119 : 408276182)));
                    var_21 = 8126464;
                }
            }
        }
    }
    var_22 = (var_14 ^ var_15);
    var_23 -= (((((168739056 ? 1 : 1))) ? var_15 : 0));
    #pragma endscop
}
