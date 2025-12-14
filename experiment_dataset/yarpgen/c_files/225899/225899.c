/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_19 = 6794951667038356365;
        var_20 = -1274239574698998106;
    }
    for (int i_1 = 4; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_21 = (min(-109, (~9618916565985199808)));
        var_22 = (!2572300535117013827);
        var_23 = (((arr_0 [i_1 - 4] [i_1 + 1]) ? 0 : 39));
    }
    for (int i_2 = 4; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_6 [i_2 - 2] = ((((~(arr_1 [i_2 - 3]))) <= (max((arr_3 [i_2]), ((11922 ? var_10 : var_5))))));
        var_24 = (max(-32765, -13766));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            {
                var_25 = (max(((((~-32435) ? (((max(var_3, var_3)))) : (arr_0 [i_3] [16])))), ((max(var_7, 0)))));
                var_26 = 65515;
            }
        }
    }
    #pragma endscop
}
