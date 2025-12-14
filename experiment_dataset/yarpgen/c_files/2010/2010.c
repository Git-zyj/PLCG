/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (-2147483647 - 1)));
        arr_3 [i_0] [i_0 - 1] = (arr_2 [i_0]);
        arr_4 [6] |= (~-17);
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = -2147483647;
        var_19 -= (arr_6 [4]);
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_20 = 240;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_21 = ((((((arr_5 [i_2 + 1] [i_4 - 2]) >> (((((-2147483647 - 1) - -2147483624)) + 46))))) ? (arr_9 [i_5] [i_4]) : (arr_5 [i_2 - 1] [i_2 + 1])));
                        var_22 = 45;
                        var_23 -= 11713;
                        arr_21 [i_2] [i_2 - 1] [i_2] [i_2] = var_14;
                    }
                }
            }
        }
        var_24 = (~-var_7);
    }
    var_25 = (-2147483647 - 1);
    #pragma endscop
}
