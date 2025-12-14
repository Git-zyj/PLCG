/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_1));
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [6] [6] [i_0] = (min((arr_3 [i_0] [i_0] [i_0]), (((arr_3 [i_0] [1] [1]) + 2282))));
                var_20 = (var_10 % 7572264135748221233);
                var_21 = (max(var_21, ((((arr_0 [i_1]) != var_16)))));
            }
        }
    }
    #pragma endscop
}
