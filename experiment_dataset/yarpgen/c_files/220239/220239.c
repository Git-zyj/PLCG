/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_15 = -200677745736185831;
            var_16 = max(((~(arr_1 [i_0]))), var_8);
        }
        var_17 = (~89);
        var_18 = var_7;
    }
    var_19 = var_14;
    var_20 = ((var_13 <= (min(((-200677745736185842 ? 164 : 200677745736185830)), ((min(102, var_5)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                var_21 = -var_4;
                var_22 = var_0;
            }
        }
    }

    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        var_23 = (min((((arr_10 [i_4]) ? (var_11 < -3944132165681931738) : (arr_6 [i_4] [i_4]))), (arr_9 [i_4 - 1])));
        var_24 = (((((arr_4 [i_4]) ? ((max(var_14, (arr_4 [i_4 - 2])))) : (min((arr_8 [i_4] [i_4]), -200677745736185842)))) & (((arr_8 [i_4] [i_4 - 1]) | (~var_4)))));
        var_25 = var_14;
        var_26 = (arr_0 [i_4 - 1]);
    }
    #pragma endscop
}
