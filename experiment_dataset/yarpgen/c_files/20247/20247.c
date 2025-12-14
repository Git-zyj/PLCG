/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((~(~41218)))) ? ((~(arr_0 [i_0] [i_0]))) : var_3);
        arr_4 [i_0] [i_0] = (((~(arr_2 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_17 = -1;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_15 [i_1] = var_15;
                    var_18 = var_11;
                }
            }
        }
        arr_16 [i_1] = ((107 ? 65535 : 1));
        var_19 = ((!(((var_7 ? ((var_2 ? 875079705 : var_11)) : (arr_7 [i_1]))))));
    }
    var_20 = (var_5 | ((~(~var_13))));
    #pragma endscop
}
