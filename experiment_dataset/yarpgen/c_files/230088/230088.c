/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_11));
    var_15 = var_8;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((-((-(arr_3 [i_0] [i_1])))));
                    var_17 = (min(var_17, var_7));
                    var_18 = (min((arr_6 [i_2]), (min(var_3, 65530))));
                }
            }
        }
        var_19 = ((136 ? (((((arr_3 [i_0] [i_0]) > var_10)) ? (arr_3 [i_0] [i_0]) : var_8)) : 65535));
        var_20 = (((((max(var_10, 65535))) ? (max(var_5, (arr_1 [i_0]))) : (arr_1 [i_0]))));
    }
    var_21 = 18;
    var_22 = (max(((var_11 ? 4294967295 : 1)), var_13));
    #pragma endscop
}
