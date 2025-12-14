/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_11 % ((-((var_7 ? 4 : var_18))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (!var_1);
        arr_2 [i_0] = ((0 ? -3243480282837829790 : 19));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] = min(1, ((-((-(arr_7 [i_0] [i_0] [i_0] [i_3] [i_0]))))));
                        arr_10 [i_1] [i_1] [i_2] [i_3] = ((-1635443946 > (((min((arr_3 [i_1] [i_2] [i_3]), 1))))));
                        var_21 = (max(var_21, (((~(!var_12))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 4; i_4 < 18;i_4 += 1)
    {
        var_22 = (min((arr_11 [i_4] [i_4 - 4]), (~var_1)));
        var_23 = (min(var_23, (-2147483647 - 1)));
    }
    var_24 = (1 ? 1 : -484319760445893021);
    var_25 = (max(var_16, ((((var_3 - 2965772348) ? 1 : var_18)))));
    var_26 = (min(var_26, var_1));
    #pragma endscop
}
