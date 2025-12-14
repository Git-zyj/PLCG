/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (min((min(4220905985, -902788433)), 902788433));
                arr_7 [i_0] [i_1] = (min((((arr_0 [i_0]) ? (arr_1 [i_0]) : 45076)), var_12));
                arr_8 [i_0] [i_0] [i_1] = ((var_19 + 0) ? (arr_3 [i_0] [i_0]) : var_4);
                arr_9 [5] [i_0] = (arr_3 [i_0] [i_0]);
                var_21 = min((arr_1 [i_0]), ((((arr_2 [i_0]) <= (arr_2 [i_0])))));
            }
        }
    }
    var_22 = (max(var_6, (min(((max(var_1, var_15))), ((var_18 ? 1 : var_13))))));
    #pragma endscop
}
