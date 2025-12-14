/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((1595388916033611166 > -16922) ? (-16923 <= 150) : -7257773924540784077));
    var_13 = 16943;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [1] = ((((((-16927 & var_4) | (-16922 & 17075725906429252353)))) ? (((-32767 - 1) ^ -16968)) : 31));
        var_14 -= (((var_1 && var_6) ? var_9 : 15));
        var_15 = (((((var_5 || var_11) > (var_7 ^ var_10))) ? var_3 : -35762));
        arr_4 [i_0] [11] = (max((((((max(1, 3280715583))) ? (var_5 <= var_0) : var_3))), (28514 - 127)));
        var_16 = (min(var_16, ((((var_4 && 35046933135360) && (((var_11 ? var_5 : var_7))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_17 = (-16965 >= 1);
                var_18 = 1527456231;
                var_19 = ((+(((16943 < var_11) ? var_9 : 3))));
            }
        }
    }
    var_20 = 1;
    #pragma endscop
}
