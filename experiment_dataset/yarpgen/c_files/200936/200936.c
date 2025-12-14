/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (max(var_18, ((max(3451505301822621214, -53)))));
        var_19 = (+-15);
        var_20 = ((min(-3451505301822621214, 1)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_21 = -15;

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_22 = (~-3451505301822621215);
                            arr_15 [i_4] [i_1] [i_4] [i_5] [i_4] = ((max(3451505301822621204, 1850635705)));
                            arr_16 [4] [i_2] [i_4] [i_3] [8] [i_5] = (~125);
                        }
                    }
                }
            }
        }
        var_23 = -162;
    }
    var_24 = 54316;
    var_25 = ((min(2444331590, 1)));
    #pragma endscop
}
