/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 3] = 1;
        arr_3 [2] [2] = (min(240, (min(206, 240))));
        var_11 = (min(var_11, ((max(15, ((max(4308983355514339521, 47326))))))));
        var_12 = (max((((min(1622830200, 15)))), 1));
        arr_4 [i_0] = 1;
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            {
                arr_9 [i_2 + 1] [i_1] = ((((((0 - -7180740265366205193) ? ((312247694 ? 288230341791973376 : 30)) : ((max(7180740265366205221, 117)))))) ? 7180740265366205195 : ((min(-240, ((2052854878 ? 22278 : 51753)))))));
                var_13 -= (~216);
            }
        }
    }
    var_14 -= (max(-118, ((((max(240, -776142813297769656))) ? 0 : var_3))));
    var_15 += var_9;
    var_16 = (44 ? 8889726898113960935 : -26933);
    #pragma endscop
}
