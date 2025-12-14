/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(var_7, var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = 64;
                arr_6 [i_0] [i_1] = 16;
                var_12 = (((((arr_5 [i_0]) ? ((-237286476 ? 136 : 65535)) : 75)) <= (max((arr_2 [i_0] [i_0]), (65535 && var_6)))));
            }
        }
    }
    var_13 = (min(var_13, (((((max(((var_1 ? var_0 : var_0)), var_2))) ? -2014397155 : (min((max(-238743353, var_2)), var_2)))))));
    var_14 = 48;
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            {
                var_15 = ((-2014397155 - ((326140684 ? var_1 : var_8))));
                arr_11 [i_2] [i_2] [i_3] = ((-2147483626 ? ((max(-993940338, (-2147483647 - 1)))) : (arr_3 [i_2] [i_2] [17])));
            }
        }
    }
    #pragma endscop
}
