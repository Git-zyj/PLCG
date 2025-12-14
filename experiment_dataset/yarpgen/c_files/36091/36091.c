/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(!var_11)));
    var_13 = (min(var_13, ((min((!-var_4), ((((max(var_0, var_3))) ? var_8 : var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (((~var_10) * (var_7 <= var_4)));

                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    var_15 = ((+((min((arr_8 [14] [i_2 - 3] [i_2 - 1]), var_3)))));
                    var_16 = ((+(max((~var_3), var_8))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_17 -= -32744;
                        arr_12 [i_1] [i_1] [i_2] [i_3] = ((-((-((min((arr_8 [i_0] [i_1] [i_1]), var_4)))))));
                        var_18 = ((min(var_6, var_7)));

                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            arr_16 [i_2] [15] [i_2] [i_1] [i_0] = min((((var_11 << (((-var_4 + 49196) - 13))))), (arr_5 [i_2] [i_3]));
                            var_19 = var_7;
                        }
                    }
                }
                arr_17 [i_0] [i_0] = ((min(32744, 7548125850459337682)));
            }
        }
    }
    var_20 *= (min(var_0, -var_10));
    var_21 = ((((((max(var_3, var_11))) & var_2)) | (~var_7)));
    #pragma endscop
}
