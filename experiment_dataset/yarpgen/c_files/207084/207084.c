/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (1 ? var_1 : (5 && 13253830387042693196));

    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_19 = (arr_2 [i_0]);
            arr_4 [i_0] [i_0] = ((((((0 ? 26 : 8275)) % (((arr_3 [i_0] [i_0] [i_0]) ? var_9 : var_14))))));
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] = (((((~(arr_0 [i_0])))) || ((((arr_0 [i_0]) ? 1 : (arr_0 [i_0]))))));
                        var_20 += var_11;
                    }
                }
            }
        }
        var_21 = (max(var_21, -2));
    }
    for (int i_4 = 3; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_22 = ((((((var_10 ? (arr_7 [i_4] [i_4] [i_4] [12]) : 3278819573))) || -5993821331389683563)));
        var_23 = (max(var_23, 26));
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 18;i_6 += 1)
            {
                {
                    var_24 = ((((((((((arr_1 [i_5] [i_5]) >= 0)))) * (~3583581034)))) ? (min((arr_14 [i_4 - 1] [i_5 + 1]), 10618013566204457418)) : ((((min(1, var_3))) ^ (!1)))));
                    var_25 += (!var_15);
                    var_26 = 229;
                }
            }
        }
    }
    #pragma endscop
}
